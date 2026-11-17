/* FUN_00540d0a - 0x00540d0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00540d0a(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x8c) = *(undefined4 *)(*(int *)(extraout_ECX + 0x90) + 0x6c);
  if (*(int **)(extraout_ECX + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x98) + 0xc))();
    FUN_00450463();
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x90) + 0x68) == 2) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x112f);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,1000,0x1a6,5,0,unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


