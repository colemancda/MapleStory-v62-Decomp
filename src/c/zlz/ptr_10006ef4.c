/* ptr_10006ef4 - 0x10006ef4 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall ptr_10006ef4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  if (7 < unaff_EBX) {
    unaff_EBX = unaff_EBX - 8;
    in_stack_00000028 = in_stack_00000028 + 1;
    unaff_EBP = unaff_EBP + -1;
  }
  *(undefined4 *)(unaff_ESI + 0x34) = param_2;
  iVar2 = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
  iVar1 = *(int *)(unaff_ESI + 0x34);
  if (*(int *)(unaff_ESI + 0x30) != iVar1) {
    *(undefined4 *)(unaff_ESI + 0x20) = in_stack_00000024;
    *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
    unaff_EDI[1] = in_stack_00000028;
    unaff_EDI[2] = unaff_EDI[2] + (unaff_EBP - *unaff_EDI);
    *unaff_EDI = unaff_EBP;
    *(int *)(unaff_ESI + 0x34) = iVar1;
    FUN_10008290(unaff_ESI,(int)unaff_EDI,iVar2);
    return;
  }
  *in_stack_00000010 = 8;
  *(undefined4 *)(unaff_ESI + 0x20) = in_stack_00000024;
  *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
  unaff_EDI[1] = in_stack_00000028;
  unaff_EDI[2] = unaff_EDI[2] + (unaff_EBP - *unaff_EDI);
  *unaff_EDI = unaff_EBP;
  *(int *)(unaff_ESI + 0x34) = iVar1;
  FUN_10008290(unaff_ESI,(int)unaff_EDI,1);
  return;
}


