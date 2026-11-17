/* FUN_006fd13a - 0x006fd13a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fd13a(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  puVar1 = *(undefined2 **)(extraout_ECX + 0x70);
  if (*(int *)(puVar1 + 0x12) != 0) {
    piStack_58 = (int *)CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
    iStack_5c = unaff_EBP + -0x24;
    uStack_60 = 0x6fd16d;
    FUN_00849dcf();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      piStack_58 = (int *)(unaff_EBP + -0x14);
      iStack_5c = 0x6fd184;
      FUN_0070af9c();
      piStack_58 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_5c = 0x6fd196;
      FUN_00403191();
      iVar4 = *(int *)(extraout_ECX + 0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        piStack_58 = (int *)0x80004003;
        iStack_5c = 0x6fd1ae;
        FUN_00878dfb();
      }
      piStack_58 = (int *)(unaff_EBP + -0x34);
      iStack_5c = unaff_EBP + -0x10;
      uStack_60 = 0x6fd1bd;
      FUN_00425067();
      piStack_58 = (int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_5c = 0x6fd1ca;
      piStack_58 = (int *)FUN_00402bc3();
      if ((int)piStack_58 < 0) {
        iStack_5c = 0x6fd1d5;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_58 = (int *)0x80004003;
        iStack_5c = 0x6fd1e5;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_58 = (int *)0x80004003;
          iStack_5c = 0x6fd1f0;
          FUN_00878dfb();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_58 = (int *)0x80004003;
        iStack_5c = 0x6fd200;
        FUN_00878dfb();
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      piStack_58 = (int *)0x6fd20a;
      uVar3 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
      piStack_58 = (int *)0x6fd215;
      uStack_60 = FUN_0040e48b();
      piStack_58 = (int *)0xffffff;
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_64 = 0;
      iVar4 = (**(code **)(*piVar2 + 0x8c))(piVar2,0);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar2,&DAT_00963cc8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_007d4a9a(unaff_EBP + -0x1c,10,unaff_EBP + -0x44,unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_60 = 0x6fd273;
      uStack_60 = FUN_00449749();
      uStack_64 = 0x6fd27c;
      uVar3 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_64;
      FUN_00448a17(uVar3);
      uVar5 = 0;
      uVar3 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004115d9(0,0);
      FUN_00448e3a(uVar3,uVar5);
      piStack_58 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piStack_58 != (int *)0x0) {
        iStack_5c = 0x6fd2ae;
        (**(code **)(*piStack_58 + 8))();
      }
      piStack_58 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_5c = 0x6fd2bb;
      piStack_58 = (int *)FUN_00402bc3();
      if ((int)piStack_58 < 0) {
        iStack_5c = 0x6fd2c6;
        FUN_00878dfb();
      }
      piStack_58 = (int *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_5c = 0x6fd2d3;
      piStack_58 = (int *)FUN_00402bc3();
      if ((int)piStack_58 < 0) {
        iStack_5c = 0x6fd2de;
        FUN_00878dfb();
      }
      piStack_58 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_58 != (int *)0x0) {
        iStack_5c = 0x6fd2ef;
        (**(code **)(*piStack_58 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_58 = (int *)0x6fd2fa;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_58 = (int *)0x6fd306;
    FUN_00705df5();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


