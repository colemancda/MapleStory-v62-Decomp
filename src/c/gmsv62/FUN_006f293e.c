/* FUN_006f293e - 0x006f293e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f293e(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  if (*(int **)(extraout_ECX + 0x590) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x590) + 0xc))();
    FUN_00450463();
  }
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x5d0 + *(int *)(extraout_ECX + 0x5a8) * 4) + 8);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    if (0xc < iVar2) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0xc;
    }
  }
  iVar3 = *(int *)(unaff_EBP + -0x10) * 0xd;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0xfc6);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,5,0x6e,iVar3 + 0x9f,1,unaff_EBP + -0x28);
  if ((*(int *)(unaff_EBP + -0x10) < 1) || (*(int *)(extraout_ECX + 0xaf8) == 0)) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x590) + 4) + 0x1c))(0);
  }
  (*DAT_0097b504)(extraout_ECX + 0x594,3,iVar3 + 0x22,0xc,iVar3 + 0x2e);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


