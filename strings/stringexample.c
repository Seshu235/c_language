#include <stdio.h>
#include <string.h>
#include <inttypes.h>

int main()
{
    char str1[] = "192.168.0.229,192.168.0.240,0E80,0777";
    char str2[64] = {};
    char *SourceIp;
    char *TargetIp;
    char *SrcAddr;
    char *TgtAddr;
    uintmax_t result;
    int SourceAddr;
    int TargetAddr;

    memcpy(&str2, &str1, sizeof(str1));

    SourceIp = strtok(str2, ",");
    printf("Source Ip Address:  %s\n", SourceIp);

    TargetIp = strtok(NULL, ",");
    printf("Target Ip Address:  %s\n", TargetIp);

    SrcAddr = strtok(NULL, ",");
    SourceAddr = strtoumax(SrcAddr, NULL, 16);
    printf("Source Address: %d  %#.4x\n", SourceAddr, SourceAddr);

    TgtAddr = strtok(NULL, ",");
    TargetAddr = strtoumax(TgtAddr, NULL, 16);
    printf("Target Address: %d  %#.4x\n", TargetAddr, TargetAddr);

}