/* FUN_005c13f1 - 0x005c13f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c13f1(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 0x18);
  iVar1 = *(int *)(unaff_EBP + 0x14);
  iVar2 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0xb0) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0xb4) = *(undefined4 *)(unaff_EBP + 0xc);
  *(int *)(extraout_ECX + 0xb8) = iVar2;
  *(int *)(extraout_ECX + 0xbc) = iVar1;
  if (iVar3 != 0) {
    iVar3 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004abf25();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0048b9e9(uVar4);
    (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))
              (extraout_ECX,1000,1,0,iVar2 + -0xc + *(int *)(extraout_ECX + 0xb0),
               *(int *)(extraout_ECX + 0xb4) + 1,iVar1 + -2,0);
    *(undefined4 *)(*(int *)(extraout_ECX + 0x7c) + 0x34) = 0xa6;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


