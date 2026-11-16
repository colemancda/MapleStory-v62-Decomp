/* FUN_50409969 - 0x50409969 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50409969(void)

{
  void *this;
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_5042a430();
  this = *(void **)(unaff_EBP + 0x20);
  extraout_ECX[9] = (int)this;
  iVar1 = FUN_50409c5d(this,unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5040c194(iVar1);
  FUN_50404f67((int)(extraout_ECX + 10));
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[0xb] = iVar1;
  FUN_50404f67(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  piVar2 = extraout_ECX + 0xd;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_50404f4f(piVar2);
  *piVar2 = 0;
  *(int **)(unaff_EBP + -0x44) = piVar2;
  piVar2 = extraout_ECX + 0xe;
  FUN_50404f4f(piVar2);
  *piVar2 = 0;
  *(int **)(unaff_EBP + -0x40) = piVar2;
  piVar2 = extraout_ECX + 0xf;
  FUN_50404f4f(piVar2);
  *piVar2 = 0;
  *(int **)(unaff_EBP + -0x3c) = piVar2;
  piVar2 = extraout_ECX + 0x10;
  FUN_50404f4f(piVar2);
  *piVar2 = 0;
  *(int **)(unaff_EBP + -0x38) = piVar2;
  FUN_50404f4f((int *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  *(int *)(unaff_EBP + -0x34) = unaff_EBP + 0x20;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x44);
  while( true ) {
    if (DAT_50438fac == 0) {
      FUN_50401c7b();
    }
    if (DAT_50438f98 == (code *)0x0) break;
    iVar1 = (*DAT_50438f98)(u_Shape2D_Vector2D_50435270,&DAT_50435298,*puVar3,0);
    if (iVar1 < 0) goto LAB_50409a54;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar3 = puVar3 + 1;
    if (4 < *(uint *)(unaff_EBP + -0x10)) {
      FUN_504057b7((short *)(unaff_EBP + -0x30));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_504057b7((short *)(unaff_EBP + -0x20));
      piVar2 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar2 == (int *)0x0) {
        FUN_5042a358(0x80004003);
        piVar2 = *(int **)(unaff_EBP + 0x20);
      }
      iVar1 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar1 = (**(code **)(iVar1 + 0x90))
                        (piVar2,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
      if (iVar1 < 0) {
        FUN_5042a366(iVar1,*(int **)(unaff_EBP + -0x10),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar1 = FUN_5040278b((short *)(unaff_EBP + -0x20));
      if (iVar1 < 0) {
        FUN_5042a358(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar1 = FUN_5040278b((short *)(unaff_EBP + -0x30));
      if (iVar1 < 0) {
        FUN_5042a358(iVar1);
      }
      FUN_5040c70a((void *)(unaff_EBP + -0x30),*(int **)(unaff_EBP + 0x20),'\x01');
      iVar1 = extraout_ECX[0x10];
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar1 == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar2 = (int *)extraout_ECX[0x10];
      iVar1 = *piVar2;
      *(int **)(unaff_EBP + 0xc) = piVar2;
      iVar1 = (**(code **)(iVar1 + 100))
                        (piVar2,*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar1 < 0) {
        FUN_5042a366(iVar1,*(int **)(unaff_EBP + 0xc),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar1 = FUN_5040278b((short *)(unaff_EBP + -0x30));
      if (iVar1 < 0) {
        FUN_5042a358(iVar1);
      }
      FUN_504057b7((short *)(unaff_EBP + -0x40));
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_504057b7((short *)(unaff_EBP + -0x30));
      iVar1 = extraout_ECX[0x10];
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar1 == 0) {
        FUN_5042a358(0x80004003);
      }
      piVar2 = (int *)extraout_ECX[0x10];
      iVar1 = *piVar2;
      *(int **)(unaff_EBP + 0xc) = piVar2;
      iVar1 = (**(code **)(iVar1 + 0x90))
                        (piVar2,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
      if (iVar1 < 0) {
        FUN_5042a366(iVar1,*(int **)(unaff_EBP + 0xc),&DAT_50435298);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_5040278b((short *)(unaff_EBP + -0x30));
      if (iVar1 < 0) {
        FUN_5042a358(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar1 = FUN_5040278b((short *)(unaff_EBP + -0x40));
      if (iVar1 < 0) {
        FUN_5042a358(iVar1);
      }
      extraout_ECX[0x11] = *(int *)(unaff_EBP + 0x18);
      extraout_ECX[0x13] = *(int *)(unaff_EBP + 0x1c);
      (**(code **)(*extraout_ECX + 0xe0))(extraout_ECX,0xffffff);
      FUN_5040398e();
      piVar2 = *(int **)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  }
  iVar1 = -0x7ffbfe10;
LAB_50409a54:
  FUN_50405e1f((void *)(unaff_EBP + -0x40),iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x40),(ThrowInfo *)&DAT_50430d08);
}


