/* FUN_005e2551 - 0x005e2551 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e2551(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_b4;
  wchar_t *pwStack_b0;
  int iStack_ac;
  wchar_t *pwStack_a8;
  
  FUN_00879bb8();
  pwStack_a8 = (wchar_t *)0x0;
  *(int **)(unaff_EBP + -0x30) = &iStack_ac;
  pwStack_b0 = u_Morph_00965b7c;
  uStack_b4 = 0x5e2578;
  FUN_004033a1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pwStack_b0 = (wchar_t *)(unaff_EBP + -0x80);
  uStack_b4 = 0x5e2585;
  FUN_00559a18();
  uStack_b4 = 0x5e258c;
  FUN_005593dc();
  uStack_b4 = 0x5e2593;
  FUN_00559498();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_ac = 0x5e25a1;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    pwStack_a8 = (wchar_t *)0x5e25b7;
    iVar1 = FUN_0055cc56();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      pwStack_a8 = 
      L"䖍傀䗆ϼ\xeee8\xe205㯿姆ٽ\xe850栛)甹痬栊䀃耀೨⥨謀\xec4d䖍僄⣨\xf76f僿䶍웘ﱅ\xe804࿭￢䶍\xe8c4ƣ￢䖍傰ᗿ苸\x8e䖍僌䖍傰痿웘ﱅ複챵诨\xf777菿ೄ삅萏ʆ"
      ;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_a8 = (wchar_t *)0x5e25d5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    pwStack_a8 = 
    L"甹痬栊䀃耀೨⥨謀\xec4d䖍僄⣨\xf76f僿䶍웘ﱅ\xe804࿭￢䶍\xe8c4ƣ￢䖍傰ᗿ苸\x8e䖍僌䖍傰痿웘ﱅ複챵诨\xf777菿ೄ삅萏ʆ"
    ;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    pwStack_a8 = (wchar_t *)0x5e25ef;
    FUN_00878dfb();
  }
  pwStack_a8 = (wchar_t *)0x5e25fb;
  FUN_00559523();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pwStack_a8 = L"䶍\xe8c4ƣ￢䖍傰ᗿ苸\x8e䖍僌䖍傰痿웘ﱅ複챵诨\xf777菿ೄ삅萏ʆ";
  FUN_004035f5();
  FUN_004027b3();
  pwStack_a8 = L"䖍僌䖍傰痿웘ﱅ複챵诨\xf777菿ೄ삅萏ʆ";
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  pwStack_a8 = (wchar_t *)(unaff_EBP + -0x50);
  iStack_ac = *(int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  pwStack_b0 = 
  L"쒃蔌࿀蚄\x02묀ڐ\x98荦끽謈롅մⲸ鞁樀僿䶍觰\xf075注\xe35e囿赖\xf04d䗆ࣼ헨\xe2ef凿첋斉僜⧨\xe20d跿炅\xffff僿䶍웬ﱅ\xe808浑\xfff7좋ۨ\xf76e诿웈ﱅ\xe80aగ￢옻䖉览\xe475ᵴ䖍僈䶍\xe8e4ꘃ\xfff7옻ൽȽ@璀倆㟨⥧贀炅\xffff僿䗆೼\xefe8\xe204㯿姆ٽ\xe850朜)甹痤贍\xe44dߨ\n\xe900ƍ"
  ;
  iVar1 = FUN_00559dbc();
  do {
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 6;
      pwStack_a8 = (wchar_t *)0x5e28cf;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        pwStack_a8 = L"䖋㯘웆ﱅ球謆倈凿謈\xec45䶃￼옻ٴࢋｐࡑ䶋忴摞ඉ";
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        pwStack_a8 = L"䖋菬ﱍ㯿瓆謆倈凿謈\xf44d幟襤\r";
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        pwStack_a8 = L"䶋忴摞ඉ";
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    pwStack_a8 = *(wchar_t **)(unaff_EBP + -0x48);
    if (*(short *)(unaff_EBP + -0x50) != 8) {
      pwStack_a8 = (wchar_t *)&DAT_0097812c;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_ac = 0x5e265e;
    FUN_004184ca();
    pwStack_a8 = (wchar_t *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_ac = 0x5e266c;
    pwStack_b0 = (wchar_t *)FUN_00411641();
    *(int **)(unaff_EBP + -0x24) = &iStack_ac;
    uStack_b4 = 0x5e2678;
    FUN_004033a1();
    pwStack_b0 = (wchar_t *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_b4 = 0x5e268b;
    FUN_005593dc();
    uStack_b4 = 0x5e2692;
    FUN_00559498();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_ac = 0x5e269d;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar1 != 0) {
      pwStack_a8 = 
      L"옻ൽȽ@璀倆㟨⥧贀炅\xffff僿䗆೼\xefe8\xe204㯿姆ٽ\xe850朜)甹痤贍\xe44dߨ\n\xe900ƍ"
      ;
      iVar1 = FUN_0055ccb6();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        pwStack_a8 = L"薍ｰ\xffff왐ﱅ\xe80cӯ￢옻絙倆᳨⥧㤀\xe475൵䶍\xe8e4ਇ";
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    pwStack_a8 = L"옻絙倆᳨⥧㤀\xe475൵䶍\xe8e4ਇ";
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      pwStack_a8 = L"甹痤贍\xe44dߨ\n\xe900ƍ";
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      FUN_005e30f3();
    }
    else {
      pwStack_a8 = u_Morph__00965b6c;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iStack_ac = 0x5e2703;
      FUN_004184ca();
      pwStack_a8 = *(wchar_t **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_ac = 0x5e2721;
      FUN_0046febf();
      pwStack_a8 = (wchar_t *)0x5e272a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      pwStack_a8 = (wchar_t *)0x5e2737;
      FUN_00403191();
      pwStack_a8 = (wchar_t *)0x0;
      iStack_ac = unaff_EBP + -0x70;
      pwStack_b0 = (wchar_t *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_b4 = 0x5e274d;
      uVar2 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_b4;
      uStack_b4 = extraout_ECX;
      FUN_004033a1(uVar2);
      iVar1 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_ac = 0x5e2782;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x30) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar1 != 0) {
        pwStack_a8 = (wchar_t *)0x5e2798;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          pwStack_a8 = 
          L"薍｠\xffff왐ﱅ\xe815Њ￢옻絙倆㟨⥦贀ꁅ왐ﱅ\xe814ϲ￢옻絙倆Ῠ⥦贀遅왐ﱅ\xe813Ϛ￢옻絙倆ߨ⥦嘀⹪䶍\xe8f0य"
          ;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pwStack_a8 = 
      L"옻絙倆㟨⥦贀ꁅ왐ﱅ\xe814ϲ￢옻絙倆Ῠ⥦贀遅왐ﱅ\xe813Ϛ￢옻絙倆ߨ⥦嘀⹪䶍\xe8f0य"
      ;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        pwStack_a8 = (wchar_t *)0x5e27c4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      pwStack_a8 = L"옻絙倆Ῠ⥦贀遅왐ﱅ\xe813Ϛ￢옻絙倆ߨ⥦嘀⹪䶍\xe8f0य";
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        pwStack_a8 = (wchar_t *)0x5e27dc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      pwStack_a8 = L"옻絙倆ߨ⥦嘀⹪䶍\xe8f0य";
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        pwStack_a8 = (wchar_t *)0x5e27f4;
        FUN_00878dfb();
      }
      pwStack_a8 = (wchar_t *)0x2e;
      iStack_ac = 0x5e27ff;
      FUN_005e312e();
      pwStack_a8 = (wchar_t *)(unaff_EBP + -0x2c);
      iStack_ac = 0x5e280c;
      FUN_0046fcad();
      pwStack_a8 = L"\xf88b䖋㯔姆ੴ삃僴廨\xe20b姿䖋几첋斉觜\xe801ﶕ￢\xe857Ǥ";
      uVar2 = FUN_0087a208();
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        pwStack_a8 = (wchar_t *)0x5e2826;
        FUN_00403384();
      }
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff5c;
      pwStack_a8 = L"\xe857Ǥ";
      FUN_004125cc();
      iStack_ac = 0x5e283d;
      pwStack_a8 = (wchar_t *)uVar2;
      iVar1 = FUN_005e2a21();
      if (iVar1 == 0) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0x22000006;
        *(undefined4 *)(unaff_EBP + -0x2c) = 0x22000006;
        pwStack_a8 = (wchar_t *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
                    /* WARNING: Subroutine does not return */
        iStack_ac = 0x5e2928;
        __CxxThrowException_8();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        pwStack_a8 = (wchar_t *)0x5e2858;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        pwStack_a8 = (wchar_t *)0x5e286c;
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        pwStack_a8 = (wchar_t *)0x5e287e;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      pwStack_a8 = (wchar_t *)0x5e2892;
      FUN_00403384();
    }
    pwStack_a8 = (wchar_t *)0x5e289c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      pwStack_a8 = (wchar_t *)0x5e28a7;
      FUN_00878dfb();
    }
    pwStack_a8 = (wchar_t *)(unaff_EBP + -0x50);
    iStack_ac = *(int *)(unaff_EBP + -0x28);
    pwStack_b0 = (wchar_t *)0x5e28b7;
    iVar1 = FUN_00559dbc();
  } while( true );
}


