/* ptr_0046c183 - 0x0046c183 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0046c183(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint unaff_EDI;
  
  while( true ) {
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    FUN_004115d9(in_EAX);
    FUN_00448e3a(in_EAX);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    param_3 = 0x46c1a4;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      param_3 = 0x46c1af;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    param_3 = 0x46c1bf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      param_3 = 0x46c1ca;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + -0x74);
    if (unaff_EDI == 0) break;
    iVar3 = *(int *)((-(uint)(unaff_EDI != 0) & unaff_EDI - 0x10) + 4);
    param_3 = 0x46c0e7;
    FUN_00424aee();
    *(int **)(unaff_EBP + 0x10) = &param_3;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    param_1 = 0x46c0fb;
    param_2 = unaff_EDI;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    param_2 = 0x46c107;
    FUN_0044974c();
    param_2 = 0x46c10e;
    uVar1 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    param_3 = 0x46c11e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      param_3 = 0x46c129;
      FUN_00878dfb();
    }
    param_3 = 0x46c135;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    param_3 = 0x46c145;
    FUN_00424aee();
    param_3 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    param_2 = 0x46c15f;
    param_2 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x2c) = &param_1;
    param_1 = extraout_ECX;
    FUN_004059fd();
    in_EAX = (*(int *)(unaff_EBP + -0xac) - *(int *)(unaff_EBP + 0x10)) / 2 +
             *(int *)(unaff_EBP + -0x68);
    unaff_EDI = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
  }
  param_3 = 0x46c1e4;
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


