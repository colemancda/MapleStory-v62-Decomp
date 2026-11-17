/* FUN_0063d9d1 - 0x0063d9d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063d9d1(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int **)(extraout_ECX + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0xc0) + 0xc))();
    FUN_00450463();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 3000) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x18,0xdfe);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (iVar2 == 0xbb9) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x14,0xdff);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (iVar2 != 0xbba) goto LAB_0063da9c;
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xe00);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00402676();
LAB_0063da9c:
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0xc0) + 0x20))
            (extraout_ECX,*(undefined4 *)(unaff_EBP + 8),0x6c,0xca,0,unaff_EBP + -0x2c);
  FUN_008161f1(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


