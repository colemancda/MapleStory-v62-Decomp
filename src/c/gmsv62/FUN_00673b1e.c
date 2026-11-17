/* FUN_00673b1e - 0x00673b1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00673b1e(int param_1)

{
  char *pcVar1;
  char cVar2;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar3;
  int iVar4;
  char *pcVar5;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_e;
  
  FUN_0043d09e(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  pPVar3 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00673bf9);
  pcVar1 = (char *)(param_1 + 0xc);
  *(LPTOP_LEVEL_EXCEPTION_FILTER *)(param_1 + 0x110) = pPVar3;
  iVar4 = (*DAT_0097b384)(0,pcVar1,0x104);
  for (pcVar5 = (char *)(iVar4 + 0xb + param_1);
      (((pcVar1 <= pcVar5 && (cVar2 = *pcVar5, cVar2 != '/')) && (cVar2 != '\\')) && (cVar2 != '.'))
      ; pcVar5 = pcVar5 + -1) {
  }
  (*DAT_0097b4a8)(&local_14);
  if (pcVar5 < pcVar1) {
    pcVar5 = pcVar5 + 1;
  }
  (*DAT_0097b50c)(pcVar5,s__d_02d_02d_LOG_0096a12c,local_14,local_12,local_e);
  return param_1;
}


