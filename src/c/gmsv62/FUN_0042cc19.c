/* FUN_0042cc19 - 0x0042cc19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042cc19(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_9c;
  wchar_t *pwStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int *piStack_88;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_88 = (int *)0x42cc46;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_88 = (int *)0x42cc53;
  FUN_00403191();
  piStack_88 = (int *)0x0;
  iStack_8c = unaff_EBP + -0x70;
  iStack_90 = unaff_EBP + -0x60;
  *(int **)(unaff_EBP + -0x28) = &iStack_94;
  pwStack_98 = u_Effect_BasicEff_img_EmptyCanvas__00964068;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_9c = 0x42cc71;
  iStack_94 = extraout_ECX_00;
  FUN_004033a1();
  pwStack_98 = (wchar_t *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_9c = 0x42cc7e;
  FUN_00405a1d();
  uStack_9c = 0x42cc85;
  FUN_00402660();
  uStack_9c = 0x42cc8c;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_8c = 0x42cc97;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    piStack_88 = (int *)0x42ccad;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_88 = (int *)0x42ccbe;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_88 = (int *)0x42cccb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x42ccd6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_88 = (int *)0x42cce3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x42ccee;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_88 = (int *)0x42ccfb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_88 = (int *)0x42cd06;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  do {
    if (-1 < *(int *)(unaff_EBP + -0x14)) {
      FUN_0087a1b0();
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_90 = 0x42cd2b;
      piStack_88 = (int *)&stack0xffffff80;
      FUN_0087a25a();
    }
    piStack_88 = (int *)(unaff_EBP + -0x24);
    iStack_8c = 0x42cd4a;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_8c = *puVar2;
    piStack_88 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_90 = unaff_EBP + -0x18;
    iStack_94 = 0x42cd5e;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00402676();
    piStack_88 = (int *)0xff;
    iStack_8c = 3;
    iStack_94 = unaff_EBP + 0x14;
    *(int **)(unaff_EBP + -0x28) = &iStack_90;
    pwStack_98 = L"卓赑၅첋斉僐䫨n＀౵䶍웨ﱅ\xe808䢝\xfffe赐\xf045\xe850ᙂ";
    iStack_90 = extraout_ECX_01;
    FUN_0041160e();
    iStack_94 = 0;
    pwStack_98 = (wchar_t *)0x0;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_9c;
    uStack_9c = extraout_ECX_02;
    FUN_00433bdf(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uVar3 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_0042e3f0(unaff_EBP + -0x10,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int *)(unaff_EBP + -0x10) == 0) break;
    piStack_88 = (int *)0x42cdca;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    piStack_88 = (int *)(unaff_EBP + -0x50);
    iStack_8c = 0x42cdd4;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_88 = (int *)0x42cde0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_88 = (int *)0x42cdea;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    piStack_88 = (int *)(unaff_EBP + -0x40);
    iStack_8c = 0x42cdf4;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_88 = (int *)0x42ce00;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piVar4 == (int *)0x0) {
      piStack_88 = (int *)0x42ce15;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_90 = *(int *)(unaff_EBP + -0x50);
    iStack_8c = *(int *)(unaff_EBP + -0x4c);
    iVar1 = *piVar4;
    piStack_88 = *(int **)(unaff_EBP + -0x48);
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
    pwStack_98 = *(wchar_t **)(unaff_EBP + -0x38);
    *(int **)(unaff_EBP + -0x28) = piVar4;
    iStack_94 = *(int *)(unaff_EBP + -0x34);
    iVar1 = (**(code **)(iVar1 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x40));
    if (iVar1 < 0) {
      piStack_88 = *(int **)(unaff_EBP + -0x28);
      iStack_90 = 0x42ce4f;
      iStack_8c = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_88 = (int *)0x42ce5c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_88 = (int *)0x42ce67;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_88 = (int *)0x42ce74;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_88 = (int *)0x42ce7f;
      FUN_00878dfb();
    }
    piStack_88 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff7c;
    if (piStack_88 != (int *)0x0) {
      iStack_8c = 0x42ce97;
      (**(code **)(*piStack_88 + 4))();
    }
    piStack_88 = (int *)0x42ce9f;
    FUN_00427af9();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_88 = (int *)0x42ceb0;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_88 = (int *)0x42cecd;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    piStack_88 = (int *)0x42cee9;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
    piStack_88 = (int *)0x42cefa;
    (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


