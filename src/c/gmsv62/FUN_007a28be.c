/* FUN_007a28be - 0x007a28be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a28be(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int iVar10;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined *extraout_ECX_02;
  int *extraout_ECX_03;
  uint uVar11;
  uint uVar12;
  int unaff_EBP;
  int *piVar13;
  int iStack_2a0;
  int *piStack_298;
  undefined4 uStack_294;
  int iStack_290;
  int *piStack_28c;
  undefined *puStack_288;
  int *piStack_284;
  wchar_t *pwStack_27c;
  int iStack_278;
  int *piStack_274;
  
  FUN_00879bb8();
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  FUN_00429303();
  iVar5 = FUN_004f162d();
  if (iVar5 == 0x623a824) {
LAB_007a2911:
    GetLocalTime((LPSYSTEMTIME)(unaff_EBP + -0x88));
    SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x88),(LPFILETIME)(unaff_EBP + -0x40));
    uVar11 = (uint)*(ushort *)(unaff_EBP + -0x7e) % 5;
    if ((uVar11 != 0) && (4999 < *(int *)(unaff_EBP + -0x30) - extraout_ECX[0x945])) {
      extraout_ECX[0x945] = *(int *)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(uint *)(unaff_EBP + -0x10) = 5 - uVar11;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_274 = (int *)0x7a299f;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      FUN_00429303();
      iVar5 = FUN_004f162d();
      if (iVar5 == 0x623a824) {
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00403191();
        piStack_274 = (int *)(unaff_EBP + -0x68);
        *(int **)(unaff_EBP + -0x18) = &iStack_278;
        pwStack_27c = u_Map_Obj_insideGL_img_inside1_ani_0096c0d4;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_004033a1();
        pwStack_27c = (wchar_t *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00405a1d();
        FUN_00402660();
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        piStack_274 = *(int **)(unaff_EBP + -0x20);
        iStack_278 = 0;
        pwStack_27c = (wchar_t *)0x0;
        (*DAT_0097b4c8)();
        FUN_0087a1b0();
        piStack_284 = (int *)0x0;
        puStack_288 = (undefined *)0xffffffff;
        iStack_290 = 0x7a2aba;
        piStack_28c = (int *)&pwStack_27c;
        iStack_290 = FUN_00449713();
        uStack_294 = 0x7a2ac0;
        piStack_28c = (int *)FUN_00456ad5();
        *(undefined ***)(unaff_EBP + -0x18) = &puStack_288;
        iStack_290 = 0x7a2acd;
        FUN_004033a1();
        piStack_28c = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_290 = 0x7a2add;
        FUN_0040263d();
        iStack_290 = 0x7a2ae4;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_288 = (undefined *)0x7a2aef;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        piStack_284 = (int *)0x7a2afe;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_284 = (int *)0x7a2b0c;
          FUN_00878dfb();
        }
        piVar13 = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_284 = (int *)0x7a2b19;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_284 = (int *)0x7a2b24;
          FUN_00878dfb();
          piVar13 = extraout_ECX_00;
        }
        piStack_284 = (int *)0xff;
        puStack_288 = (undefined *)0x0;
        *(int ***)(unaff_EBP + -0x18) = &piStack_28c;
        iStack_290 = 0;
        uStack_294 = 0x7a2b37;
        piStack_28c = piVar13;
        FUN_00424e0a();
        iStack_290 = 0xffffffb5;
        uStack_294 = 0x169;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_298;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_2a0 = 0x7a2b4e;
        FUN_00424dd7();
        *(int **)(unaff_EBP + -0x18) = &iStack_2a0;
        FUN_00424dbc(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x10);
        piStack_284 = (int *)0x7a2b78;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar6);
        piVar13 = *(int **)(unaff_EBP + -0x10);
      }
      else {
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00403191();
        piStack_274 = (int *)(unaff_EBP + -0x68);
        *(int **)(unaff_EBP + -0x18) = &iStack_278;
        pwStack_27c = u_Map_Obj_insideGL_img_inside1_ani_0096c090;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_004033a1();
        pwStack_27c = (wchar_t *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00405a1d();
        FUN_00402660();
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        piStack_274 = *(int **)(unaff_EBP + -0x20);
        iStack_278 = 0;
        pwStack_27c = (wchar_t *)0x0;
        (*DAT_0097b4c8)();
        FUN_0087a1b0();
        piStack_284 = (int *)0x0;
        puStack_288 = (undefined *)0xffffffff;
        iStack_290 = 0x7a2c6e;
        piStack_28c = (int *)&pwStack_27c;
        iStack_290 = FUN_00449713();
        uStack_294 = 0x7a2c74;
        piStack_28c = (int *)FUN_00456ad5();
        *(undefined ***)(unaff_EBP + -0x18) = &puStack_288;
        iStack_290 = 0x7a2c81;
        FUN_004033a1();
        piStack_28c = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_290 = 0x7a2c91;
        FUN_0040263d();
        iStack_290 = 0x7a2c98;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_288 = (undefined *)0x7a2ca3;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        piStack_284 = (int *)0x7a2cb2;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_284 = (int *)0x7a2cc0;
          FUN_00878dfb();
        }
        piVar13 = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_284 = (int *)0x7a2ccd;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_284 = (int *)0x7a2cd8;
          FUN_00878dfb();
          piVar13 = extraout_ECX_01;
        }
        piStack_284 = (int *)0xff;
        puStack_288 = (undefined *)0x0;
        *(int ***)(unaff_EBP + -0x18) = &piStack_28c;
        iStack_290 = 0;
        uStack_294 = 0x7a2ceb;
        piStack_28c = piVar13;
        FUN_00424e0a();
        iStack_290 = 0xffffff6e;
        uStack_294 = 0xfffffe6d;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_298;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_2a0 = 0x7a2d05;
        FUN_00424dd7();
        *(int **)(unaff_EBP + -0x18) = &iStack_2a0;
        FUN_00424dbc(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x10);
        piStack_284 = (int *)0x7a2d2f;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar6);
        piVar13 = *(int **)(unaff_EBP + -0x10);
      }
      if (piVar13 != (int *)0x0) {
        piStack_284 = (int *)0x7a2d3c;
        (**(code **)(*piVar13 + 8))();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_284 = (int *)0x7a2d4b;
        FUN_00878dfb();
      }
      piVar13 = *(int **)(unaff_EBP + -0x14);
      puStack_288 = (undefined *)0x7a2d59;
      piStack_284 = piVar13;
      iStack_290 = (**(code **)(*piVar13 + 0xe0))();
      if (iStack_290 < 0) {
        puStack_288 = &DAT_00963df8;
        uStack_294 = 0x7a2d69;
        piStack_28c = piVar13;
        FUN_00878e09();
      }
      piStack_28c = (int *)extraout_ECX[0x34f];
      puStack_288 = (undefined *)0x1;
      iStack_290 = 0x7a2d7a;
      FUN_0040ee87();
      piStack_298 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (piStack_298 == (int *)0x0) {
        puStack_288 = (undefined *)0x80004003;
        piStack_28c = (int *)0x7a2d8f;
        FUN_00878dfb();
        piStack_298 = *(int **)(unaff_EBP + -0x14);
      }
      iVar5 = *piStack_298;
      uStack_294 = *(undefined4 *)(unaff_EBP + -0x68);
      iStack_290 = *(undefined4 *)(unaff_EBP + -100);
      piStack_28c = *(int **)(unaff_EBP + -0x60);
      *(int **)(unaff_EBP + -0x10) = piStack_298;
      puStack_288 = *(undefined **)(unaff_EBP + -0x5c);
      iVar5 = (**(code **)(iVar5 + 0xfc))();
      if (iVar5 < 0) {
        iStack_2a0 = *(int *)(unaff_EBP + -0x10);
        FUN_00878e09(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_2a0 = 0x7a2dc9;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_2a0 = 0x7a2dd4;
        FUN_00878dfb();
      }
      iStack_2a0 = 0x7a2de0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iStack_2a0 = unaff_EBP + -0x58;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_2a0 = 0x7a2dfb;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_2a0 = 0x7a2e05;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      iStack_2a0 = unaff_EBP + -0x68;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_2a0 = 0x7a2e1b;
        FUN_00878dfb();
      }
      piVar13 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (piVar13 == (int *)0x0) {
        iStack_2a0 = 0x7a2e30;
        FUN_00878dfb();
        piVar13 = *(int **)(unaff_EBP + -0x14);
      }
      iVar5 = *piVar13;
      iStack_2a0 = *(int *)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + -0x10) = piVar13;
      iVar5 = (**(code **)(iVar5 + 0x110))
                        (piVar13,0,*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                         *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                         *(undefined4 *)(unaff_EBP + -0x54));
      if (iVar5 < 0) {
        piStack_274 = (int *)0x7a2e6b;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffd98;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00424e82();
      FUN_00427af9();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
  }
  else {
    FUN_00429303();
    iVar5 = FUN_004f162d();
    if (iVar5 == 0x23c36d11) goto LAB_007a2911;
  }
  uVar11 = -(uint)(extraout_ECX[0x35d] != 0) & extraout_ECX[0x35d] - 0xcU;
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_00978368;
  *(uint *)(unaff_EBP + -0x18) = uVar11;
  iVar5 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar5 + 4);
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  iVar5 = FUN_0078ffdf();
  if ((iVar5 != 0) && (extraout_ECX[0x914] <= *(int *)(unaff_EBP + -0x30))) {
    *(undefined4 *)(uVar11 + 0x16c) = 0;
  }
  FUN_007f17b3();
  (**(code **)(extraout_ECX[0x1e] + 0xc))();
  puVar6 = (undefined4 *)(**(code **)(extraout_ECX[1] + 0x10))();
  uVar4 = puVar6[1];
  *(undefined4 *)(unaff_EBP + -0x50) = *puVar6;
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00429303();
  if (*(int *)(iVar5 + 0xf4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(iVar5 + 0xf4) + -4);
  }
  piStack_274 = *(int **)(unaff_EBP + -0x20);
  iStack_278 = 0x7a2faa;
  FUN_0056a96b();
  iVar5 = 0;
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    do {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  uVar11 = extraout_ECX[0x900];
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  while (uVar11 != 0) {
    *(uint *)(unaff_EBP + -0x1c) = uVar11;
    iVar5 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
    uVar12 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
    piStack_274 = (int *)(unaff_EBP + -0x24);
    iStack_278 = unaff_EBP + -0x40;
    pwStack_27c = *(wchar_t **)(unaff_EBP + -0x4c);
    *(uint *)(unaff_EBP + -0x10) = uVar11;
    piStack_284 = *(int **)(uVar11 + 0x4e8);
    puStack_288 = (undefined *)0x7a3015;
    FUN_00429303();
    puStack_288 = (undefined *)0x7a3022;
    iVar5 = FUN_0075a904();
    uVar11 = uVar12;
    if ((iVar5 == 0) || (extraout_ECX[0x8fc] == *(int *)(*(int *)(unaff_EBP + -0x10) + 0x4e8))) {
      *(undefined4 *)
       (*(int *)(unaff_EBP + -0x14) + *(int *)(*(int *)(unaff_EBP + -0x10) + 0x4e8) * 4) = 1;
      FUN_0074d6fb();
      piStack_274 = (int *)0x7a305d;
      FUN_007b488a();
    }
  }
  piVar13 = (int *)0x0;
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    do {
      if ((*(int *)(*(int *)(unaff_EBP + -0x14) + (int)piVar13 * 4) == 0) &&
         (piVar13 != (int *)extraout_ECX[0x8fc])) {
        piStack_274 = (int *)(unaff_EBP + -0x24);
        iStack_278 = unaff_EBP + -0x40;
        pwStack_27c = *(wchar_t **)(unaff_EBP + -0x4c);
        puStack_288 = (undefined *)0x7a309d;
        piStack_284 = piVar13;
        FUN_00429303();
        puStack_288 = (undefined *)0x7a30aa;
        iVar5 = FUN_0075a904();
        if (iVar5 != 0) {
          uVar11 = extraout_ECX[0x900];
          do {
            if (uVar11 == 0) {
              iVar5 = FUN_007b484c();
              piStack_274 = (int *)0x0;
              iStack_278 = 0;
              pwStack_27c = (wchar_t *)0x1;
              piStack_284 = (int *)0x0;
              *(int *)(unaff_EBP + -0x1c) = iVar5;
              *(int **)(iVar5 + 0x4e8) = piVar13;
              piStack_28c = (int *)(unaff_EBP + -0x34);
              *(undefined ***)(unaff_EBP + -0x10) = &puStack_288;
              iStack_290 = 0x7a3108;
              puStack_288 = extraout_ECX_02;
              FUN_00450368();
              iStack_290 = unaff_EBP + -0x24;
              *(int ***)(unaff_EBP + -0x6c) = &piStack_28c;
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              uStack_294 = 0x7a311b;
              piStack_28c = extraout_ECX_03;
              FUN_00450368();
              iStack_290 = *(undefined4 *)(unaff_EBP + -0x3c);
              uStack_294 = *(undefined4 *)(unaff_EBP + -0x40);
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              piStack_298 = (int *)0x7a312d;
              FUN_0074da18();
              break;
            }
            iVar5 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
            puVar6 = (undefined4 *)(uVar11 + 0x4e8);
            uVar11 = iVar5 + 0x10U & -(uint)(iVar5 != 0);
          } while ((int *)*puVar6 != piVar13);
        }
      }
      piVar13 = (int *)((int)piVar13 + 1);
    } while ((int)piVar13 < *(int *)(unaff_EBP + -0x20));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00524ec7();
  if (DAT_00978354 != (undefined4 *)0x0) {
    (**(code **)*DAT_00978354)();
  }
  if (extraout_ECX[0x936] != 0) {
    if (7000 < *(int *)(unaff_EBP + -0x30) - extraout_ECX[0x937]) {
      extraout_ECX[0x937] = *(int *)(unaff_EBP + -0x30);
      extraout_ECX[0x936] = 0;
    }
  }
  if (extraout_ECX[0x925] != 0) {
    iVar5 = FUN_005a9936();
    if (iVar5 == 0) {
LAB_007a3306:
      iVar5 = FUN_005a9936();
      if (iVar5 == 0) {
        if (extraout_ECX[0x925] == 0) {
          piStack_274 = (int *)0x7a3327;
          FUN_00878dfb();
        }
        piStack_274 = (int *)0x7a3336;
        piVar13 = (int *)FUN_004113e5();
        iVar5 = *piVar13;
        *(undefined4 *)(unaff_EBP + -4) = 0x1e;
        if (iVar5 == 0) {
          piStack_274 = (int *)0x7a334e;
          FUN_00878dfb();
        }
        iVar5 = FUN_00404a94();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        cVar2 = '\x01' - (iVar5 != 0);
        *(char *)(unaff_EBP + -0x29) = cVar2;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          piStack_274 = (int *)0x7a336f;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
          cVar2 = *(char *)(unaff_EBP + -0x29);
        }
        if (cVar2 != '\0') {
          piStack_274 = (int *)0x7a3386;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
          piStack_274 = (int *)(unaff_EBP + -0x58);
          iStack_278 = 0x7a3395;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            piStack_274 = (int *)0x7a33a1;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0x1f;
          piStack_274 = (int *)0x7a33ae;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
          piStack_274 = (int *)(unaff_EBP + -0x48);
          iStack_278 = 0x7a33b8;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            piStack_274 = (int *)0x7a33c4;
            FUN_00878dfb();
          }
          iVar5 = extraout_ECX[0x925];
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          if (iVar5 == 0) {
            piStack_274 = (int *)0x7a33db;
            FUN_00878dfb();
          }
          piStack_274 = (int *)0x7a33ea;
          piVar13 = (int *)FUN_004113e5();
          iVar5 = *piVar13;
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (iVar5 == 0) {
            piStack_274 = (int *)0x7a33ff;
            FUN_00878dfb();
          }
          piStack_298 = (int *)*piVar13;
          pwStack_27c = *(wchar_t **)(unaff_EBP + -0x58);
          iStack_278 = *(int *)(unaff_EBP + -0x54);
          iVar5 = *piStack_298;
          piStack_274 = *(int **)(unaff_EBP + -0x50);
          piStack_28c = *(int **)(unaff_EBP + -0x48);
          puStack_288 = *(undefined **)(unaff_EBP + -0x44);
          iStack_290 = 0;
          piStack_284 = *(int **)(unaff_EBP + -0x40);
          uStack_294 = 0xff;
          *(int **)(unaff_EBP + -0x1c) = piStack_298;
          iVar5 = (**(code **)(iVar5 + 0x90))();
          if (iVar5 < 0) {
            piStack_274 = *(int **)(unaff_EBP + -0x1c);
            pwStack_27c = (wchar_t *)0x7a343e;
            iStack_278 = iVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            piStack_274 = (int *)0x7a344f;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_274 = (int *)0x7a345c;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_274 = (int *)0x7a3467;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_007a346e;
        }
      }
    }
    else {
      if (extraout_ECX[0x925] == 0) {
        piStack_274 = (int *)0x7a31c1;
        FUN_00878dfb();
      }
      piStack_274 = (int *)0x7a31d0;
      piVar13 = (int *)FUN_004113e5();
      iVar5 = *piVar13;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      if (iVar5 == 0) {
        piStack_274 = (int *)0x7a31e8;
        FUN_00878dfb();
      }
      iVar5 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0x29) = 0 < iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_274 = (int *)0x7a3206;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      if (*(char *)(unaff_EBP + -0x29) == '\0') goto LAB_007a3306;
      piStack_274 = (int *)0x7a321c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      piStack_274 = (int *)(unaff_EBP + -0x58);
      iStack_278 = 0x7a322b;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_274 = (int *)0x7a3237;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x1b;
      piStack_274 = (int *)0x7a3244;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_274 = (int *)(unaff_EBP + -0x48);
      iStack_278 = 0x7a324e;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_274 = (int *)0x7a325a;
        FUN_00878dfb();
      }
      iVar5 = extraout_ECX[0x925];
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (iVar5 == 0) {
        piStack_274 = (int *)0x7a3271;
        FUN_00878dfb();
      }
      piStack_274 = (int *)0x7a3280;
      piVar13 = (int *)FUN_004113e5();
      iVar5 = *piVar13;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (iVar5 == 0) {
        piStack_274 = (int *)0x7a3295;
        FUN_00878dfb();
      }
      piStack_298 = (int *)*piVar13;
      pwStack_27c = *(wchar_t **)(unaff_EBP + -0x58);
      iStack_278 = *(int *)(unaff_EBP + -0x54);
      iVar5 = *piStack_298;
      piStack_274 = *(int **)(unaff_EBP + -0x50);
      piStack_28c = *(int **)(unaff_EBP + -0x48);
      puStack_288 = *(undefined **)(unaff_EBP + -0x44);
      iStack_290 = 0;
      piStack_284 = *(int **)(unaff_EBP + -0x40);
      uStack_294 = 0;
      *(int **)(unaff_EBP + -0x1c) = piStack_298;
      iVar5 = (**(code **)(iVar5 + 0x90))();
      if (iVar5 < 0) {
        piStack_274 = *(int **)(unaff_EBP + -0x1c);
        pwStack_27c = 
        L"䖋藰움ﱅ琜謆倈凿贈롅왐ﱅ\xe81b\xf8d4ￅ삅絙倆Ǩ൛茀ﱍ跿ꡅ棩\x01謀\xe8cf昩￠삅蔏Ū"
        ;
        iStack_278 = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_274 = (int *)0x7a32e2;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_274 = (int *)0x7a32ef;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_274 = (int *)0x7a32fa;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007a346e:
      piStack_274 = (int *)0x7a3474;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_274 = (int *)0x7a347f;
        FUN_00878dfb();
      }
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x28) + 0x2414;
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) + 0x2114;
  iStack_278 = 0x7a349c;
  piStack_274 = (int *)iVar5;
  iVar7 = FUN_00413367();
  if (((iVar7 != 0) && (1000 < *(int *)(unaff_EBP + -0x30) - extraout_ECX[0x90d])) &&
     ((extraout_ECX[0x14b] & 0xfffffffeU) != 0x12)) {
    iStack_278 = 0x7a34dd;
    piStack_274 = (int *)iVar5;
    uVar4 = FUN_00413367();
    pwVar8 = *(wchar_t **)(unaff_EBP + -0x38);
    iStack_278 = 4;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    pwStack_27c = pwVar8;
    iVar5 = FUN_00653a70();
    piStack_284 = (int *)((int)pwVar8 + 0x61);
    *(int *)(unaff_EBP + -0x10) = ((100 - iVar5) * *(int *)(unaff_EBP + -0x1c)) / 100;
    puStack_288 = (undefined *)0x7a350b;
    sVar3 = FUN_0045f084();
    iVar5 = sVar3 + -1;
    if (*(int *)(unaff_EBP + -0x10) <= iVar5) {
      iVar5 = *(int *)(unaff_EBP + -0x10);
    }
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      piStack_274 = (int *)0x7a3534;
      uVar4 = FUN_007b19ba();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      piStack_274 = (int *)0x7a3541;
      FUN_0078c08d();
      *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x88;
      *(undefined4 *)(unaff_EBP + -0x10) = 4;
      do {
        uVar4 = FUN_004133f0();
        puVar6 = *(undefined4 **)(unaff_EBP + -0x24);
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 4;
        piVar13 = (int *)(unaff_EBP + -0x10);
        *piVar13 = *piVar13 + -1;
        iVar7 = *piVar13;
        *puVar6 = uVar4;
      } while (iVar7 != 0);
      piStack_274 = (int *)0x0;
      iStack_278 = 0x2d;
      pwStack_27c = L"䗇⋼";
      FUN_0060142b();
      *(undefined4 *)(unaff_EBP + -4) = 0x22;
      FUN_007d1e08();
      piStack_274 = (int *)0x7a358e;
      FUN_00457d37();
      piStack_274 = (int *)0x7a359b;
      FUN_00457cda();
      piStack_274 = (int *)0x7a35a5;
      FUN_00457cda();
      piStack_274 = (int *)0x7a35ae;
      FUN_00457d37();
      piStack_274 = (int *)0x7a35b7;
      FUN_0045d247();
      piStack_274 = (int *)0x7a35c6;
      FUN_004751b2();
      iStack_278 = iVar5 - *(int *)(unaff_EBP + -0x1c);
      piStack_274 = (int *)0x0;
      pwStack_27c = L"䖋菐ﱍ跿뱍莉␴";
      FUN_007b05f0();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      extraout_ECX[0x90d] = *(int *)(unaff_EBP + -0x30);
      FUN_0045ebca();
    }
  }
  iVar5 = FUN_0045e2eb();
  if ((iVar5 == 0) && ((extraout_ECX[0x14b] & 0xfffffffeU) != 0x12)) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0x23;
    piStack_274 = (int *)0x7a3623;
    FUN_0085c67a();
    pwVar8 = (wchar_t *)extraout_ECX[0x35e];
    *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978108;
    piStack_274 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
    piStack_274 = (int *)*piStack_274;
    iStack_278 = unaff_EBP + -0x34;
    pwStack_27c = pwVar8;
    iVar5 = FUN_00423dc8();
    if (iVar5 == 0) {
      piStack_274 = (int *)(unaff_EBP + -0x88);
      iStack_278 = 0x7a3666;
      FUN_0043f3d6();
      uVar11 = FUN_0045e4b8();
      if ((uVar11 & 1) == 0) {
        iVar5 = FUN_00429303();
        uVar11 = *(uint *)(iVar5 + 0x108) >> 1 & 1;
        *(uint *)(unaff_EBP + -0x6c) = uVar11;
        if (uVar11 == 0) goto LAB_007a368d;
LAB_007a369c:
        piStack_274 = (int *)0x7a36ae;
        iVar5 = FUN_005d5a8e();
        *(int *)(unaff_EBP + -0x24) = iVar5;
        if (iVar5 != 0) {
          if (*(int *)(*(int *)(iVar5 + 0x15c) + 0x1e4) == 1) {
            piStack_274 = (int *)(*(int *)(iVar5 + 0x15c) + 0xc);
            iStack_278 = 0x7a36d4;
            FUN_004b8c9b();
            piStack_274 = (int *)0x7a36de;
            FUN_007b1a8f();
          }
          iVar5 = FUN_0043fb93();
          if (iVar5 == 0) {
            cVar2 = (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x28) + 0x2a6c) + 4))();
            if (cVar2 != '\0') {
              piStack_274 = (int *)(unaff_EBP + -0x78);
              iStack_278 = 0x7a3714;
              FUN_0043f3d6();
              pwStack_27c = *(wchar_t **)(unaff_EBP + -0x78);
              iStack_278 = *(int *)(unaff_EBP + -0x74);
              piStack_274 = *(int **)(unaff_EBP + -0x70);
              piStack_284 = (int *)0x7a372c;
              FUN_005c5bbc();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              piStack_274 = (int *)0x4df8f1;
              iStack_278 = *(int *)(unaff_EBP + -0x38);
              pwStack_27c = 
              L"\xf08b\xf685♾䖋跘ᒈ!\xe800륹￑삅ᑵ痿评ￋ쁵痿囜痿\xe8f0﷧";
              pwVar8 = (wchar_t *)FUN_00650dae();
              if ((0 < (int)pwVar8) && (iVar5 = FUN_004bf0d4(), iVar5 == 0)) {
                piStack_274 = *(int **)(unaff_EBP + -0x40);
                iStack_278 = *(int *)(unaff_EBP + -0x24);
                piStack_284 = (int *)0x7a3773;
                pwStack_27c = pwVar8;
                FUN_007b355a();
              }
            }
            piVar13 = (int *)(*(int *)(unaff_EBP + -0x24) + 4);
            piVar9 = (int *)(**(code **)(*piVar13 + 0x14))();
            piVar13 = (int *)(**(code **)(*piVar13 + 0x10))();
            iVar5 = *piVar13;
            iVar7 = *piVar9;
            piVar13 = extraout_ECX + 1;
            piVar9 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
            iVar10 = *piVar9;
            piVar9 = (int *)(**(code **)(*piVar13 + 0x14))();
            iVar7 = ((iVar5 - iVar7) - iVar10) + *piVar9;
            piStack_274 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x11c);
            iStack_278 = 0x7a37b7;
            iVar5 = FUN_0048bb31();
            if (iVar5 != 0) {
              uVar4 = (**(code **)(*piVar13 + 0x14))();
              iVar5 = *piVar13;
              *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
              iVar5 = (**(code **)(iVar5 + 0x10))();
              if (*(int *)(iVar5 + 4) - *(int *)(*(int *)(unaff_EBP + -0x18) + 4) < 0) {
                iVar7 = 0x7fffffff;
              }
            }
            iVar5 = (**(code **)(*extraout_ECX + 4))();
            piStack_274 = (int *)(iVar5 + 0x228);
            iStack_278 = 0x7a37f8;
            FUN_00413367();
            iStack_278 = -1;
            pwStack_27c = *(wchar_t **)(unaff_EBP + -0x24);
            piStack_284 = (int *)0x0;
            puStack_288 = (undefined *)0x0;
            piStack_28c = (int *)0x0;
            iStack_290 = 0x7a380e;
            piStack_274 = (int *)iVar7;
            (**(code **)(*extraout_ECX + 0x40))();
          }
          else if (1999 < *(int *)(unaff_EBP + -0x30) - extraout_ECX[0x90f]) {
            extraout_ECX[0x90f] = *(int *)(unaff_EBP + -0x30);
            piStack_274 = (int *)0x4dd5cf;
            iStack_278 = *(int *)(unaff_EBP + -0x38);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            pwStack_27c = 
            L"䶋僰럨\xead0僿趍ﶜ\xffff뗨\x06謀ⲃ\x05＀颵\xfffe菿ﻠ\xf883贊邅\xfffe僿䗆⓼俨웺姿ｙ颵\xfffe跿邅\xfffe僿㯨웺姿륙镨\x97䖉\xe8e8蝹ￆ摪툳\xf759㧱\xe855ᑳ趍ﶜ\xffff䗆⏼部\xeb3c\xe9ffﺵ\xffff譖\xe8cb饍\x01趍ﶜ\xffff䗆⏼瓨\xeb3c菿ﱍ跿챍\xf8e8축诿\xf44dꖍ﶐\xffff幟襤\r"
            ;
            FUN_00650dae();
            piStack_274 = (int *)0x7a38ea;
            FUN_006509a1();
            piStack_274 = (int *)0x7a38f6;
            FUN_007a3fab();
            piStack_274 = (int *)(unaff_EBP + -0x170);
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iStack_278 = 0x7a3918;
            FUN_00413367();
            piStack_274 = (int *)(unaff_EBP + -0x170);
            iStack_278 = 0x7a392c;
            uVar4 = FUN_00413367();
            *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
            uVar11 = FUN_004133f0();
            if (uVar11 % 100 <= *(uint *)(unaff_EBP + -0x18)) {
              piStack_274 = (int *)0x7a3963;
              FUN_007bd2b0();
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              FUN_006575e6();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_0047cf76();
              goto LAB_007a397e;
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            FUN_006575e6();
          }
        }
      }
      else {
LAB_007a368d:
        iVar5 = FUN_004bed04();
        if (iVar5 == 0) goto LAB_007a369c;
      }
      piStack_274 = (int *)(unaff_EBP + -0x50);
      iStack_278 = unaff_EBP + -0x20;
      pwStack_27c = (wchar_t *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      piStack_284 = (int *)0x7a382f;
      FUN_00429303();
      piStack_284 = (int *)0x7a3836;
      iVar5 = FUN_005a7eca();
      if ((iVar5 != 0) && (0 < *(int *)(unaff_EBP + -0x14))) {
        if ((*(int *)(unaff_EBP + -0x50) == 0) && (*(int *)(unaff_EBP + -0x4c) == 0)) {
          piVar13 = extraout_ECX + 1;
          uVar4 = (**(code **)(extraout_ECX[1] + 0x14))();
          *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
          piVar9 = (int *)(**(code **)(*piVar13 + 0x10))();
          iVar5 = *piVar9;
          iVar7 = **(int **)(unaff_EBP + -0x18);
          uVar4 = (**(code **)(*piVar13 + 0x14))();
          iVar10 = *piVar13;
          *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
          iVar10 = (**(code **)(iVar10 + 0x10))();
          iVar10 = *(int *)(iVar10 + 4);
          iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 4);
          if (iVar5 - iVar7 < 0) {
            *(undefined4 *)(unaff_EBP + -0x50) = 0xfffffef2;
          }
          else if (iVar5 != iVar7) {
            *(undefined4 *)(unaff_EBP + -0x50) = 0x10e;
          }
          if (iVar10 == iVar1 || iVar10 - iVar1 < 0) {
            *(undefined4 *)(unaff_EBP + -0x4c) = 0xfffffef2;
          }
        }
        piStack_274 = (int *)0x0;
        iStack_278 = 0;
        pwStack_27c = (wchar_t *)0x0;
        piStack_284 = *(int **)(unaff_EBP + -0x4c);
        puStack_288 = *(undefined **)(unaff_EBP + -0x50);
        piStack_28c = *(int **)(unaff_EBP + -0x14);
        iStack_290 = 0x7a39bc;
        (**(code **)(*extraout_ECX + 0x40))();
      }
      iVar5 = extraout_ECX[0x90e];
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (1000 < *(int *)(unaff_EBP + -0x30) - iVar5) {
        iVar5 = extraout_ECX[1];
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        piStack_274 = (int *)0x7a39e8;
        piVar13 = (int *)(**(code **)(iVar5 + 0x10))();
        piStack_274 = (int *)piVar13[1];
        iStack_278 = *piVar13;
        pwStack_27c = (wchar_t *)(unaff_EBP + -0x70);
        FUN_00423c11();
        iVar5 = *(int *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (iVar5 != 0) {
          piStack_274 = (int *)0x7a3a13;
          iVar7 = FUN_00455c59();
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar7 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_274 = (int *)0x7a3a29;
          piStack_274 = (int *)FUN_00653bda();
          iStack_278 = *(int *)(unaff_EBP + -0x18);
          pwStack_27c = 
          L"쒃謌櫈塤섫꼏㑆摪妙立紹웄ﱅ褥\xec45ॴ赗쁍柨쮭\xffff\xec75쀳䖋誔぀쮋\xe850ʒ\x01윻䖉࿬욎"
          ;
          iVar7 = FUN_00653a70();
          iVar5 = *(int *)(iVar5 + 0x34);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          *(int *)(unaff_EBP + -0x14) = ((100 - iVar7) * iVar5) / 100;
          if (*(int *)(unaff_EBP + -0x3c) != 0) {
            piStack_274 = (int *)0x7a3a5b;
            FUN_0045e7c2();
          }
          piStack_274 = (int *)CONCAT31((int3)((uint)*(int *)(unaff_EBP + -0x6c) >> 8),
                                        *(undefined1 *)(*(int *)(unaff_EBP + -0x6c) + 0x30));
          iStack_278 = 0x7a3a6e;
          iVar5 = FUN_007b3d00();
          *(int *)(unaff_EBP + -0x14) = iVar5;
          if (0 < iVar5) {
            piStack_274 = (int *)0x7a3a81;
            uVar4 = FUN_007b19ba();
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
            piStack_274 = (int *)0x7a3a8f;
            FUN_0078c08d();
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x28) + 0x3044;
            puVar6 = (undefined4 *)(unaff_EBP + -0x98);
            *(undefined4 *)(unaff_EBP + -0x10) = 4;
            do {
              uVar4 = FUN_004133f0();
              *puVar6 = uVar4;
              puVar6 = puVar6 + 1;
              piVar13 = (int *)(unaff_EBP + -0x10);
              *piVar13 = *piVar13 + -1;
            } while (*piVar13 != 0);
            piStack_274 = (int *)0x0;
            iStack_278 = 0x2d;
            pwStack_27c = L"䗆⟼㫨ˣ倀䶍\xe8b8䉠ￋ﹨";
            FUN_0060142b();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            FUN_007d1e08();
            piStack_274 = (int *)0x7a3ad7;
            FUN_00457d37();
            piStack_274 = (int *)0x7a3ae4;
            FUN_00457cda();
            piStack_274 = (int *)0x7a3af5;
            FUN_00457cda();
            piStack_274 = (int *)0x7a3b00;
            FUN_00457d37();
            piStack_274 = (int *)0x7a3b0b;
            FUN_0045d247();
            piStack_274 = (int *)0x7a3b1a;
            FUN_004751b2();
            iStack_278 = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x1c);
            piStack_274 = (int *)0x0;
            pwStack_27c = L"䖋跐뱍莉␸";
            FUN_007b05f0();
            extraout_ECX[0x90e] = *(int *)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            FUN_0045ebca();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (*(int *)(unaff_EBP + -0x6c) != 0) {
          piStack_274 = (int *)0x7a3b51;
          FUN_0042500e();
        }
      }
      if (extraout_ECX[0x91b] != 0) {
        if (5000 < *(int *)(unaff_EBP + -0x30) - extraout_ECX[0x91a]) {
          extraout_ECX[0x91a] = *(int *)(unaff_EBP + -0x30);
          goto LAB_007a3b7a;
        }
      }
      extraout_ECX[0x91b] = 0;
    }
LAB_007a3b7a:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0047cf76();
  }
  if (extraout_ECX[0x798] != 0) {
    piStack_274 = (int *)0x0;
    iStack_278 = 0;
    pwStack_27c = (wchar_t *)0x7a3b98;
    FUN_007b0832();
  }
  FUN_007a5478();
  FUN_007bcd6a();
  FUN_007bce39();
  FUN_007bcedd();
  FUN_007a5cc8();
  FUN_007a5db6();
  FUN_007a5d75();
  if (extraout_ECX[0x915] != 0) {
    piStack_274 = (int *)0x7a3be0;
    iVar5 = FUN_007a3f65();
    if (iVar5 == 1000) {
      iVar5 = FUN_007d1e08();
      iVar5 = iVar5 - extraout_ECX[0x913];
      iVar7 = 0xf;
LAB_007a3c0d:
      iVar5 = iVar5 / iVar7 + 2;
      if (0x44 < iVar5) {
        iVar5 = 0x45;
      }
    }
    else {
      if (iVar5 == 2000) {
        iVar5 = FUN_007d1e08();
        iVar5 = iVar5 - extraout_ECX[0x913];
        iVar7 = 0x1e;
        goto LAB_007a3c0d;
      }
      iVar5 = *(int *)(unaff_EBP + -0x6c);
    }
    if (extraout_ECX[0x917] != iVar5) {
      extraout_ECX[0x917] = iVar5;
      FUN_007b0fd0();
    }
    iVar5 = extraout_ECX[0x799];
    if ((iVar5 != 0x2f9f6c) ||
       (iVar7 = extraout_ECX[0x918], *(undefined4 *)(unaff_EBP + -0x20) = 1,
       *(int *)(unaff_EBP + -0x30) - iVar7 < 0x65)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    if ((iVar5 != 0x4faa8c) ||
       (iVar5 = extraout_ECX[0x919], *(undefined4 *)(unaff_EBP + -0x34) = 1,
       *(int *)(unaff_EBP + -0x30) - iVar5 < 0x65)) {
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    if ((*(int *)(unaff_EBP + -0x20) != 0) || (*(int *)(unaff_EBP + -0x34) != 0)) {
      iVar5 = *(int *)(unaff_EBP + -0x38);
      piStack_274 = (int *)((-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & 0xffdff4e0) + 0x4faa8c);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      pwStack_27c = L"紹觠졅綉瓰謞謃ￋѐ냿ˀ";
      iStack_278 = iVar5;
      uVar4 = FUN_00650dae();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (*(int *)(unaff_EBP + -0x20) == 0) {
LAB_007a3cda:
        piStack_274 = (int *)0x0;
        iStack_278 = 0;
        pwStack_27c = *(wchar_t **)(unaff_EBP + -0x38);
        piStack_284 = (int *)0x7a3cea;
        iVar7 = FUN_007a22a3();
        if (iVar7 != 0) goto LAB_007a3d20;
        piStack_274 = (int *)(unaff_EBP + -0x18);
        iStack_278 = 0x7a3d01;
        piStack_274 = (int *)FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -4) = 0x28;
        iStack_278 = 0x7a3d10;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007a3d19:
        FUN_00414ebb();
      }
      else {
        iVar7 = (**(code **)(*extraout_ECX + 4))();
        piStack_274 = (int *)(iVar7 + 0x2b8);
        iStack_278 = 0x7a3cd4;
        iVar7 = FUN_00413367();
        if (iVar7 == 0) goto LAB_007a3cda;
LAB_007a3d20:
        piStack_274 = (int *)(iVar5 + 0x71);
        iStack_278 = 0x7a3d2c;
        sVar3 = FUN_0045f084();
        piStack_274 = (int *)0x7a3d3b;
        iVar5 = FUN_006509a1();
        piStack_274 = (int *)(iVar5 + 0xa0);
        iStack_278 = 0x7a3d4c;
        iVar5 = FUN_00413367();
        if (sVar3 < iVar5) {
          piStack_274 = (int *)(unaff_EBP + -0x18);
          iStack_278 = 0x7a3d68;
          piStack_274 = (int *)FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -4) = 0x29;
          iStack_278 = 0x7a3d77;
          FUN_00471102();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_007a3d19;
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
      }
      iVar5 = FUN_007a3efc();
      if ((iVar5 == 0) || (*(int *)(unaff_EBP + -0x10) == 0)) {
LAB_007a3dd7:
        FUN_007b0b2a();
      }
      else {
        piStack_274 = (int *)0x0;
        iStack_278 = 0;
        pwStack_27c = (wchar_t *)0x0;
        piStack_284 = (int *)0x0;
        puStack_288 = (undefined *)0x0;
        piStack_28c = (int *)0x7a3daa;
        iVar5 = FUN_007a71f1();
        if (iVar5 != 0) goto LAB_007a3dd7;
        piStack_274 = (int *)0x0;
        iStack_278 = 0;
        pwStack_27c = *(wchar_t **)(unaff_EBP + -0x1c);
        piStack_284 = *(int **)(unaff_EBP + -0x24);
        puStack_288 = (undefined *)0x7a3dc1;
        FUN_007a93ea();
        if (*(int *)(unaff_EBP + -0x34) == 0) {
          piStack_274 = (int *)extraout_ECX[0x799];
          iStack_278 = 0x7a3dd3;
          FUN_007d3e08();
        }
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          extraout_ECX[0x919] = *(int *)(unaff_EBP + -0x30);
        }
      }
      else {
        extraout_ECX[0x918] = *(int *)(unaff_EBP + -0x30);
      }
    }
    iVar5 = FUN_007a3efc();
    if ((iVar5 == 0) || (*(int *)(DAT_00979250 + 0xc) != 0)) {
      FUN_007b0b2a();
    }
  }
  if (extraout_ECX[0x923] == 0) {
    FUN_00834015();
    extraout_ECX[0x923] = 1;
  }
  FUN_008344dd();
  if (extraout_ECX[0x137] != 0) {
    piStack_274 = (int *)0x0;
    iStack_278 = 0x30;
    extraout_ECX[0x137] = 0;
    pwStack_27c = L"돿Ә";
    FUN_0060142b();
    piStack_274 = extraout_ECX + 0x134;
    *(undefined4 *)(unaff_EBP + -4) = 0x2a;
    iStack_278 = 0x7a3e71;
    FUN_00413367();
    piStack_274 = (int *)0x7a3e7c;
    FUN_00457d37();
    piStack_274 = (int *)0x7a3e8b;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  FUN_0078ded5();
  while ((extraout_ECX[0x928] != 0 &&
         (iVar5 = extraout_ECX[0x929], iVar7 = FUN_007d1e08(), *(int *)(iVar5 + 4) < iVar7))) {
    piStack_274 = (int *)0x7a3ec7;
    FUN_007b4a14();
  }
  while ((extraout_ECX[0x92d] != 0 &&
         (iVar5 = extraout_ECX[0x92e], iVar7 = FUN_007d1e08(), *(int *)(iVar5 + 4) < iVar7))) {
    piStack_274 = (int *)0x7a3efa;
    FUN_007b4a14();
  }
LAB_007a397e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


