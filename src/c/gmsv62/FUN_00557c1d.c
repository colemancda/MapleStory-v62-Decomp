/* FUN_00557c1d - 0x00557c1d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00557c1d(void)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_51c;
  int *piStack_518;
  wchar_t *pwStack_514;
  int iStack_510;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x60) = extraout_ECX;
  iStack_510 = 0x557c44;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_510 = 0x557c55;
  FUN_00403191();
  iStack_510 = 0;
  pwStack_514 = (wchar_t *)(unaff_EBP + -0x9c);
  piStack_518 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_51c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_51c = extraout_ECX_00;
  FUN_00679e4e(&puStack_51c,0x91c);
  iVar2 = unaff_EBP + -0x11c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_514 = (wchar_t *)0x557ca8;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -100) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    iStack_510 = 0x557cbe;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_510 = 0x557ccf;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_510 = 0x557cdf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_510 = 0x557cea;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_510 = 0x557cfa;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_510 = 0x557d05;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_510 = 0x557d15;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_510 = 0x557d20;
    FUN_00878dfb();
  }
  iStack_510 = 0x557d2a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    iStack_510 = 0x557d3d;
    FUN_00878dfb();
  }
  iStack_510 = 0x557d49;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_510 = 0x557d56;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004027b3();
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      iStack_510 = 0x557d74;
      FUN_00878dfb();
    }
    piStack_518 = *(int **)(unaff_EBP + -0x30);
    iStack_510 = unaff_EBP + -0x7c;
    pwStack_514 = (wchar_t *)0x1;
    puStack_51c = (undefined1 *)0x557d87;
    iVar2 = (**(code **)(*piStack_518 + 0xc))();
    if (iVar2 != 0) goto LAB_005582eb;
    iStack_510 = unaff_EBP + -0x28;
    pwStack_514 = (wchar_t *)0x557d9c;
    pwVar1 = (wchar_t *)(unaff_EBP + -0x7c);
    FUN_00405a23();
    pwStack_514 = pwVar1;
    iStack_510 = 0;
    piStack_518 = (int *)(unaff_EBP + -0x28);
    *(wchar_t ***)(unaff_EBP + -0x18) = &pwStack_514;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_51c = (undefined1 *)0x557db3;
    FUN_004059fd();
    piStack_518 = (int *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_51c = (undefined1 *)0x557dc6;
    FUN_0040263d();
    puStack_51c = (undefined1 *)0x557dcd;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    pwStack_514 = 
    L"윻䖉覔\xec7dᵴ䖍傔䶍\xe8ec쵂￪윻ൽȽ@璀倆ﳨ㈏贀҅\xffff僿䗆ჼ듨\xeaad㯿姇ٽ\xe850࿡2紹࿬뢄\x04贀\xf88d\xfffa\xe8ffԆ"
    ;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x6c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      iStack_510 = 0x557dee;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_510 = 0x557dff;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_510 = 0x557e0f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_510 = 0x557e1a;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) break;
    FUN_00558334();
    *(int **)(unaff_EBP + -0x18) = &iStack_510;
    pwStack_514 = u_cash_0096568c;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_518 = (int *)0x557e43;
    FUN_004033a1();
    pwStack_514 = (wchar_t *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_518 = (int *)0x557e56;
    FUN_0040263d();
    piStack_518 = (int *)0x557e5d;
    iStack_510 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    pwStack_514 = 
    L"薉﫸\xffff薍Ｄ\xffff왐ﱅ\xe811굆￪쒃㬌緇倆燨㈏㤀\xf8bd\xfffa痿坪譑觌\xe865硨陖\xe800듾￪薍ｔ\xffff赐\xec4d䗆ᇼ蟨\xeaa7诿\xe8c8짧￪왐ﱅ\xe815ꚉ￫薉﫸\xffff薍ｔ\xffff왐ﱅ\xe811곦￪쒃㬌緇倆ᇨ㈏㤀\xf8bd\xfffa瓿윊\xf885\xfffa˿"
    ;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x508) = uVar3;
    pwStack_514 = (wchar_t *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_518 = (int *)0x557e7d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_510 = 0x557e8a;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x508) == 0) {
      *(int **)(unaff_EBP + -0x18) = &iStack_510;
      pwStack_514 = u_multipet_00965678;
      piStack_518 = (int *)0x557ea3;
      FUN_004033a1();
      pwStack_514 = (wchar_t *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_518 = (int *)0x557eb6;
      FUN_0040263d();
      piStack_518 = (int *)0x557ebd;
      iStack_510 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pwStack_514 = 
      L"薉﫸\xffff薍ｔ\xffff왐ﱅ\xe811곦￪쒃㬌緇倆ᇨ㈏㤀\xf8bd\xfffa瓿윊\xf885\xfffa˿"
      ;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x508) = uVar3;
      pwStack_514 = (wchar_t *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_518 = (int *)0x557edd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_510 = 0x557eea;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x508) != 0) {
        *(undefined4 *)(unaff_EBP + -0x508) = 2;
      }
    }
    iStack_510 = 0;
    puStack_51c = (undefined1 *)&pwStack_514;
    *(wchar_t ***)(unaff_EBP + -0x18) = &pwStack_514;
    piStack_518 = (int *)0x3b4;
    FUN_00679e4e();
    piStack_518 = (int *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_51c = (undefined1 *)0x557f27;
    FUN_0040263d();
    puStack_51c = (undefined1 *)0x557f2e;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    pwStack_514 = (wchar_t *)0x557f39;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x54) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      iStack_510 = 0x557f4f;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_510 = 0x557f60;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_510 = 0x557f70;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_510 = 0x557f7b;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      iStack_510 = 0x557f8a;
      FUN_00878dfb();
    }
    iStack_510 = 0x557f96;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_510 = 0x557fa3;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004027b3();
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x34) == 0) {
        iStack_510 = 0x557fc1;
        FUN_00878dfb();
      }
      piStack_518 = *(int **)(unaff_EBP + -0x34);
      iStack_510 = unaff_EBP + -0x7c;
      pwStack_514 = (wchar_t *)0x1;
      puStack_51c = (undefined1 *)0x557fd6;
      iVar2 = (**(code **)(*piStack_518 + 0xc))();
      if (iVar2 != 0) goto LAB_00558261;
      iStack_510 = unaff_EBP + -0x1c;
      pwStack_514 = (wchar_t *)0x557feb;
      FUN_00405a23();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_510 = 0x558001;
      FUN_00432cfc();
      iStack_510 = 0x55800d;
      iVar2 = FUN_00410919();
      FUN_00402fa6();
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
      }
      iStack_510 = 0;
      piStack_518 = (int *)(unaff_EBP + -0x1c);
      *(wchar_t ***)(unaff_EBP + -0x40) = &pwStack_514;
      puStack_51c = (undefined1 *)0x558035;
      FUN_004059fd();
      piStack_518 = (int *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_51c = (undefined1 *)0x558048;
      FUN_0040263d();
      puStack_51c = (undefined1 *)0x55804f;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      pwStack_514 = 
      L"윻䖉覴\xf07dᵴ䖍傴䶍\xe8f0쫀￪윻ൽȽ@璀倆竨㈍贀㒅\xffff僿䗆⇼㋨\xeaab㯿姇ٽ\xe850ൟ2紹࿰ꢄ\x01㤀\xe87dѴ\xf633᛫䖋㯤瓇謄\xeb00㌂僀䟨㈡夀\xf08b紹痰栊䀃耀⣨㈍謀\xf04d䖍傰臨\xeac8僿䶍웈ﱅ\xe822딉￪䖋㮰웇ﱅ琤謆倈凿褈뱽紹痈栊䀃耀\xece8㈌謀졅ࢋ喍劼喍劄Ūｐ౑삅蔏å"
      ;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x4c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar2 != 0) {
        iStack_510 = 0x558070;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_510 = 0x558081;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_510 = 0x558091;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_510 = 0x55809c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        iStack_510 = 0x5580c1;
        FUN_0087a208();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_510 = 0x5580d3;
        FUN_00878dfb();
      }
      iStack_510 = 0x5580df;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_510 = 0x5580ec;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
        iStack_510 = 0x5580fd;
        (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          iStack_510 = 0x55810f;
          FUN_00878dfb();
        }
        piStack_518 = *(int **)(unaff_EBP + -0x38);
        iStack_510 = unaff_EBP + -0x7c;
        pwStack_514 = (wchar_t *)0x1;
        puStack_51c = (undefined1 *)0x558122;
        iVar2 = (**(code **)(*piStack_518 + 0xc))();
        if (iVar2 != 0) break;
        iStack_510 = unaff_EBP + -0x2c;
        pwStack_514 = (wchar_t *)0x558137;
        iVar2 = unaff_EBP + -0x7c;
        FUN_00405a23();
        iStack_510 = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          pwStack_514 = (wchar_t *)(unaff_EBP + -0x2c);
          *(int **)(unaff_EBP + -0x40) = &iStack_510;
          piStack_518 = (int *)0x55819f;
          FUN_004059fd();
          pwStack_514 = (wchar_t *)(unaff_EBP + -0x10c);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_518 = (int *)0x5581b2;
          FUN_0040263d();
          piStack_518 = (int *)0x5581b9;
          iStack_510 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          pwStack_514 = (wchar_t *)0x5581c3;
          uVar3 = FUN_00412550();
          puVar4 = (undefined4 *)FUN_00518b2e();
          *puVar4 = uVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
        }
        else {
          pwStack_514 = (wchar_t *)(unaff_EBP + -0x2c);
          *(int **)(unaff_EBP + -0x40) = &iStack_510;
          piStack_518 = (int *)0x558152;
          FUN_004059fd();
          pwStack_514 = (wchar_t *)(unaff_EBP + -0xec);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_518 = (int *)0x558165;
          FUN_0040263d();
          piStack_518 = (int *)0x55816c;
          iStack_510 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          pwStack_514 = (wchar_t *)0x558176;
          uVar3 = FUN_00412550();
          puVar4 = (undefined4 *)FUN_00518b2e();
          *puVar4 = uVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
        }
        iStack_510 = 0x5581e8;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_510 = 0x5581f3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
        iStack_510 = 0x558220;
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_510 = 0x558231;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00402fa6();
LAB_00558261:
    FUN_0055a5cc();
    iStack_510 = 0x55827d;
    FUN_005595b8();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      iStack_510 = 0x55828e;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_510 = 0x55829f;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00558369();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_510 = 0x5582bf;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
  }
  FUN_004027eb();
  FUN_00402fa6();
LAB_005582eb:
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    iStack_510 = 0x5582fc;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_510 = 0x558309;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_510 = 0x558314;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_510 = 0x558325;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


