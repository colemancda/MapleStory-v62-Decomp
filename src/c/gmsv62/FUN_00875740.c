/* FUN_00875740 - 0x00875740 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00875740(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,int param_5,
                undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_180 [64];
  char local_140 [63];
  char acStack_101 [257];
  
  FUN_00879f55(local_140,&DAT_0096f00c,param_1);
  FUN_00879f55(local_180,&DAT_0096f008,param_2);
  uVar4 = 0xffffffff;
  pcVar2 = local_140;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar2 = local_180;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_008758c0(param_6,acStack_101 + 1);
  iVar3 = FUN_0087cb30(local_140,acStack_101 + 1,~uVar4 - 1);
  while (iVar3 != 0) {
    if (*pcVar2 == '\0') goto LAB_00875895;
    pcVar2 = (char *)FUN_008758c0(pcVar2,acStack_101 + 1);
    iVar3 = FUN_0087cb30(local_140,acStack_101 + 1,~uVar4 - 1);
  }
  pcVar2 = (char *)FUN_008758c0(pcVar2,acStack_101 + 1);
  while (acStack_101[1] != '[') {
    iVar3 = FUN_0087cb30(local_180,acStack_101 + 1,~uVar5 - 1);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      pcVar2 = local_180;
      goto code_r0x00875887;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = (char *)FUN_008758c0(pcVar2,acStack_101 + 1);
  }
  goto LAB_00875895;
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x00875887:
    if (uVar4 == 0) break;
  }
  param_3 = acStack_101 + ~uVar4;
LAB_00875895:
  FUN_0087b372(param_4,param_3,param_5);
  uVar4 = 0xffffffff;
  param_4[param_5 + -1] = '\0';
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  return ~uVar4 - 1;
}


