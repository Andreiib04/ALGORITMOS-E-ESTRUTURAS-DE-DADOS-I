#include <stdio.h>
#include <stdlib.h>
/*
Aluno: Andrei Bueno
Matrícula: 20202924
*/
int cmp_dec(const void *a, const void *b)
{
    int *pa = (int *)a;
    int *pb = (int *)b;
    return (*pb) - (*pa);
}
int *maxSubsequence(int *nums, int numsSize, int k, int *returnSize)
{
    int cont = 0;
    int sum = nums[0];
    int start = 0;
    int *max_subsequence = (int *)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++)
    {
        max_subsequence[i] = nums[i];
        sum += nums[i];
    }
    int soma = sum;
    for (int i = k; i < numsSize; i++)
    {
        soma += nums[i] - nums[i - k];
        if (soma > sum)
        {
            sum = soma;
            cont = i - k + 1;
            start = i;
        }
    }
    qsort(&nums[cont], k, sizeof(int), cmp_dec);
    for (int i = 0; i < k; i++)
    {
        max_subsequence[i] = nums[cont + i];
    }

    *returnSize = k;
    return max_subsequence;
}
int main()
{
    int nums[] = {3, 4, 3, 3};
    int k = 2;
    int returnSize = 0;
    int *subsequence = maxSubsequence(nums, sizeof(nums) / sizeof(int), k, &returnSize);

    printf("Subsequencia de soma maxima: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", subsequence[i]);
    }
    printf("\n");
    free(subsequence);
    return 0;
}