/* FUN_0087b917 - 0x0087b917 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087b917(int param_1,int param_2,char *param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  
  lVar5 = CONCAT44(param_2,param_1);
  pcVar1 = param_3;
  if (param_5 != 0) {
    *param_3 = '-';
    param_3 = param_3 + 1;
    lVar5 = CONCAT44(-(param_2 + (uint)(param_1 != 0)),-param_1);
    pcVar1 = param_3;
  }
  do {
    pcVar4 = pcVar1;
    uVar3 = __aullrem(lVar5,param_4,0);
    lVar5 = __aulldiv(lVar5,param_4,0);
    if (uVar3 < 10) {
      cVar2 = (char)uVar3 + '0';
    }
    else {
      cVar2 = (char)uVar3 + 'W';
    }
    *pcVar4 = cVar2;
    pcVar1 = pcVar4 + 1;
  } while (lVar5 != 0);
  pcVar4[1] = '\0';
  do {
    cVar2 = *pcVar4;
    *pcVar4 = *param_3;
    *param_3 = cVar2;
    pcVar4 = pcVar4 + -1;
    param_3 = param_3 + 1;
  } while (param_3 < pcVar4);
  return;
}


