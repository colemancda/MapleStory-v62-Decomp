/* ptr_006828e8 - 0x006828e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006828e8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar3 = param_1;
  while( true ) {
    param_1 = piVar3;
    iStack_4 = 0x6828ed;
    param_1 = (int *)FUN_005e312e();
    iStack_4 = 0x6828fa;
    puVar2 = (undefined4 *)FUN_0046fcad();
    param_1 = (int *)*puVar2;
    FUN_0087a208();
    if (*(int **)(unaff_EBP + -0x2c) != unaff_ESI) {
      param_1 = *(int **)(unaff_EBP + -0x2c) + -3;
      FUN_00403384();
    }
    param_1 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000004;
    FUN_004125cc();
    iStack_4 = 0x68292b;
    piVar3 = (int *)FUN_00682a6b();
    if (piVar3 == unaff_ESI) break;
    param_1 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (param_1 != unaff_ESI) {
      (**(code **)(*param_1 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x18) != unaff_ESI) {
      param_1 = *(int **)(unaff_EBP + -0x18) + -3;
      FUN_00403384();
    }
    param_1 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (param_1 != unaff_ESI) {
      (**(code **)(*param_1 + 8))();
    }
    while( true ) {
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x10) != unaff_ESI) {
        param_1 = *(int **)(unaff_EBP + -0x10) + -3;
        FUN_00403384();
      }
      param_1 = (int *)(unaff_EBP + -0x50);
      param_1 = (int *)FUN_00402bc3();
      if ((int)param_1 < (int)unaff_ESI) {
        FUN_00878dfb();
      }
      param_1 = (int *)(unaff_EBP + -0x34);
      iStack_4 = *(int *)(unaff_EBP + -0x28);
      iStack_8 = 0x6829a5;
      iVar4 = FUN_00559dbc();
      if (iVar4 == 0) {
        param_1 = (int *)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        param_1 = (int *)FUN_00402bc3();
        if ((int)param_1 < (int)unaff_ESI) {
          FUN_00878dfb();
        }
        param_1 = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (param_1 != unaff_ESI) {
          (**(code **)(*param_1 + 8))();
        }
        param_1 = *(int **)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (param_1 != unaff_ESI) {
          (**(code **)(*param_1 + 8))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      param_1 = (int *)0xffffffff;
      *(int **)(unaff_EBP + -0x10) = unaff_ESI;
      iStack_4 = 0x68274c;
      FUN_004184ca();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_4 = 0x68275a;
      iStack_8 = FUN_00411641();
      *(int **)(unaff_EBP + -0x24) = &iStack_4;
      uStack_c = 0x682766;
      FUN_004033a1();
      iStack_8 = unaff_EBP + -0x90;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_c = 0x682779;
      FUN_005593dc();
      uStack_c = 0x682780;
      FUN_00559498();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_4 = 0x68278b;
      piVar3 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x38) = piVar3;
      *(int **)(unaff_EBP + -0x1c) = unaff_ESI;
      if (piVar3 != unaff_ESI) {
        param_1 = (int *)(unaff_EBP + -0x38);
        param_1 = (int *)FUN_0055ccb6();
        if (((int)param_1 < (int)unaff_ESI) && (param_1 != (int *)0x80004002)) {
          FUN_00878dfb();
        }
      }
      param_1 = (int *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      param_1 = (int *)FUN_00402bc3();
      if ((int)param_1 < (int)unaff_ESI) {
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x1c) != unaff_ESI) break;
      param_1 = (int *)0x6827da;
      FUN_005e30f3();
    }
    param_1 = (int *)0xffffffff;
    *(int **)(unaff_EBP + -0x18) = unaff_ESI;
    iStack_4 = 0x6827f1;
    FUN_004184ca();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x10) == unaff_ESI) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)((uint)(*(int **)(unaff_EBP + -0x10))[-1] >> 1);
    }
    iStack_4 = 0x68280f;
    FUN_0046febf();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00403191();
    iStack_4 = unaff_EBP + -0x70;
    iStack_8 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_c = 0x68283b;
    uVar1 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_c;
    uStack_c = extraout_ECX;
    FUN_004033a1(uVar1);
    iVar4 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_4 = 0x682870;
    piVar3 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x30) = piVar3;
    *(int **)(unaff_EBP + -0x20) = unaff_ESI;
    if (piVar3 != unaff_ESI) {
      param_1 = (int *)(unaff_EBP + -0x30);
      param_1 = (int *)FUN_00404b30();
      if (((int)param_1 < (int)unaff_ESI) && (param_1 != (int *)0x80004002)) {
        FUN_00878dfb();
      }
    }
    param_1 = (int *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    param_1 = (int *)FUN_00402bc3();
    if ((int)param_1 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    param_1 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    param_1 = (int *)FUN_00402bc3();
    if ((int)param_1 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    param_1 = (int *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    param_1 = (int *)FUN_00402bc3();
    piVar3 = unaff_ESI;
    if ((int)param_1 < (int)unaff_ESI) {
      FUN_00878dfb();
      piVar3 = unaff_ESI;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0x22000006;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x22000006;
  param_1 = (int *)&DAT_008f7260;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
                    /* WARNING: Subroutine does not return */
  iStack_4 = 0x682a16;
  __CxxThrowException_8();
}


