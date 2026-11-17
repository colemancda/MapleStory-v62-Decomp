/* ptr_0046c0eb - 0x0046c0eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_0046c0eb(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  uint unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  undefined4 uStack_c;
  uint uStack_8;
  int iStack_4;
  
  while( true ) {
    *(int **)(unaff_EBP + 0x10) = &iStack_4;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    uStack_c = 0x46c0fb;
    uStack_8 = unaff_EBX;
    iStack_4 = param_1;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    uStack_8 = 0x46c107;
    FUN_0044974c();
    uStack_8 = 0x46c10e;
    uVar1 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    iStack_4 = 0x46c11e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4 = 0x46c129;
      FUN_00878dfb();
    }
    iStack_4 = 0x46c135;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_4 = 0x46c145;
    FUN_00424aee();
    iStack_4 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    uStack_8 = 0x46c15f;
    uStack_8 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_c;
    FUN_004059fd(unaff_EBX);
    uVar1 = *(undefined4 *)(unaff_EBP + 0x18);
    iVar2 = (*(int *)(unaff_EBP + -0xac) - *(int *)(unaff_EBP + 0x10)) / 2 +
            *(int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    FUN_004115d9(iVar2,uVar1);
    FUN_00448e3a(iVar2,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_4 = 0x46c1a4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4 = 0x46c1af;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    iStack_4 = 0x46c1bf;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4 = 0x46c1ca;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + -0x74);
    if (unaff_EDI == 0) break;
    iVar2 = *(int *)((-(uint)(unaff_EDI != 0) & unaff_EDI - 0x10) + 4);
    iStack_4 = 0x46c0e7;
    FUN_00424aee();
    param_1 = extraout_ECX;
    unaff_EBX = unaff_EDI;
    unaff_EDI = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  }
  iStack_4 = 0x46c1e4;
  FUN_0046fc23();
  *(undefined4 *)(unaff_EBP + -200) = 1;
  FUN_004125e6();
  FUN_004125e6();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  *(undefined ***)(unaff_EBP + -0xc4) = &PTR_FUN_008e969c;
  FUN_0046ff8c();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_004125e6();
  FUN_00402fa6();
  FUN_004027eb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


