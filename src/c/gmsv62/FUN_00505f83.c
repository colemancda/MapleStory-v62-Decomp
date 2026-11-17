/* FUN_00505f83 - 0x00505f83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00505f83(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined4 extraout_ECX;
  undefined **extraout_ECX_00;
  undefined **extraout_ECX_01;
  undefined **extraout_ECX_02;
  undefined **extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_d8;
  wchar_t *pwStack_d4;
  undefined **ppuStack_d0;
  undefined1 *puStack_cc;
  undefined **ppuStack_c8;
  
  FUN_00879bb8();
  ppuStack_c8 = *(undefined ***)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x38) = extraout_ECX;
  puStack_cc = (undefined1 *)0x505fa3;
  FUN_004e5f8c();
  ppuStack_c8 = (undefined **)0x0;
  puStack_cc = (undefined1 *)0x0;
  *(undefined ****)(unaff_EBP + 8) = &ppuStack_d0;
  pwStack_d4 = u_monsterCarnival_00964f74;
  uStack_d8 = 0x505fb7;
  FUN_004033a1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pwStack_d4 = (wchar_t *)(unaff_EBP + -0xa4);
  uStack_d8 = 0x505fca;
  FUN_0040263d();
  uStack_d8 = 0x505fd1;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  ppuStack_d0 = (undefined **)0x505fdf;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    ppuStack_c8 = (undefined **)(unaff_EBP + -0x40);
    puStack_cc = (undefined1 *)0x505ff5;
    ppuStack_c8 = (undefined **)FUN_00404b30();
    if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
      puStack_cc = (undefined1 *)0x506006;
      FUN_00878dfb();
    }
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_cc = (undefined1 *)0x506016;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x506021;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)&DAT_00980690;
  puStack_cc = (undefined1 *)0x506032;
  FUN_00403191();
  ppuStack_c8 = (undefined **)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_cc = (undefined1 *)0x506042;
  FUN_00403191();
  ppuStack_c8 = (undefined **)0x0;
  puStack_cc = (undefined1 *)0x0;
  ppuStack_d0 = (undefined **)(unaff_EBP + -0x94);
  pwStack_d4 = (wchar_t *)(unaff_EBP + -0x84);
  *(undefined4 **)(unaff_EBP + 8) = &uStack_d8;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&uStack_d8,0x8a2);
  iVar1 = unaff_EBP + -0xc4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  ppuStack_d0 = (undefined **)0x506095;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar1 != 0) {
    ppuStack_c8 = (undefined **)(unaff_EBP + -0x44);
    puStack_cc = (undefined1 *)0x5060ab;
    ppuStack_c8 = (undefined **)FUN_00404b30();
    if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
      puStack_cc = (undefined1 *)0x5060bc;
      FUN_00878dfb();
    }
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_cc = (undefined1 *)0x5060cc;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x5060d7;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_cc = (undefined1 *)0x5060e7;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x5060f2;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_cc = (undefined1 *)0x506102;
  ppuVar2 = (undefined **)FUN_00402bc3();
  ppuVar5 = ppuStack_c8;
  if ((int)ppuVar2 < 0) {
    puStack_cc = (undefined1 *)0x50610d;
    ppuStack_c8 = ppuVar2;
    FUN_00878dfb();
    ppuVar5 = extraout_ECX_00;
  }
  ppuStack_c8 = (undefined **)0x0;
  puStack_cc = (undefined1 *)0x0;
  *(undefined ****)(unaff_EBP + 8) = &ppuStack_d0;
  pwStack_d4 = (wchar_t *)&DAT_00964f6c;
  uStack_d8 = 0x50611f;
  ppuStack_d0 = ppuVar5;
  FUN_004033a1();
  pwStack_d4 = (wchar_t *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_d8 = 0x506132;
  FUN_0040263d();
  uStack_d8 = 0x506139;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  ppuStack_d0 = (undefined **)0x506144;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    ppuStack_c8 = (undefined **)(unaff_EBP + -0x3c);
    puStack_cc = (undefined1 *)0x50615a;
    ppuStack_c8 = (undefined **)FUN_00404b30();
    if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
      puStack_cc = (undefined1 *)0x50616b;
      FUN_00878dfb();
    }
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_cc = (undefined1 *)0x50617b;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x506186;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    ppuStack_c8 = (undefined **)0x80004003;
    puStack_cc = (undefined1 *)0x506195;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)0x50619d;
  iVar1 = FUN_0040cf4d();
  *(int *)(unaff_EBP + -0x30) = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  ppuVar5 = extraout_ECX_01;
  if (0 < iVar1) {
    do {
      ppuStack_c8 = (undefined **)0x5061b9;
      FUN_0087a1b0();
      ppuStack_c8 = (undefined **)0x0;
      puStack_cc = (undefined1 *)0x0;
      pwStack_d4 = *(wchar_t **)(unaff_EBP + 8);
      uStack_d8 = 0x5061c6;
      ppuStack_d0 = (undefined **)&stack0xffffff3c;
      pwStack_d4 = (wchar_t *)FUN_00412335();
      *(undefined ****)(unaff_EBP + -0x14) = &ppuStack_d0;
      uStack_d8 = 0x5061d2;
      FUN_004033a1();
      pwStack_d4 = (wchar_t *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_d8 = 0x5061e2;
      FUN_0040263d();
      uStack_d8 = 0x5061e9;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      ppuStack_d0 = (undefined **)0x5061f4;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x2c) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar1 != 0) {
        ppuStack_c8 = (undefined **)(unaff_EBP + -0x2c);
        puStack_cc = (undefined1 *)0x50620a;
        ppuStack_c8 = (undefined **)FUN_00404b30();
        if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
          puStack_cc = (undefined1 *)0x50621b;
          FUN_00878dfb();
        }
      }
      ppuStack_c8 = (undefined **)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_cc = (undefined1 *)0x506228;
      ppuStack_c8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_c8 < 0) {
        puStack_cc = (undefined1 *)0x506233;
        FUN_00878dfb();
      }
      ppuStack_c8 = (undefined **)0xffffffff;
      puStack_cc = (undefined1 *)0x50623c;
      puVar3 = (undefined4 *)FUN_00507368();
      ppuStack_c8 = (undefined **)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_cc;
      ppuStack_d0 = &PTR_LAB_00964f64;
      pwStack_d4 = 
      L"䖍催䶍웰ﱅ\xe813쏞￯좋㻨\xefe6僿䗆ᗼ\xe0e8\xf0c2觿贆걅왐ﱅ\xe813쥄￯쒃㬌緇倆濨㜫＀\xe836⹙\r윻ཙ겄"
      ;
      FUN_004033a1();
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      pwStack_d4 = 
      L"좋㻨\xefe6僿䗆ᗼ\xe0e8\xf0c2觿贆걅왐ﱅ\xe813쥄￯쒃㬌緇倆濨㜫＀\xe836⹙\r윻ཙ겄"
      ;
      FUN_0040263d();
      pwStack_d4 = 
      L"왐ﱅ\xe815신\xfff0ډ䖍催䗆ᏼ䓨\xefc9菿ೄ윻ٽ\xe850⭯7㛿姨മ㬀姇萏¬";
      puStack_cc = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      ppuStack_d0 = (undefined **)0x506270;
      uVar4 = FUN_00412550();
      *puVar3 = uVar4;
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      pwStack_d4 = L"쒃㬌緇倆濨㜫＀\xe836⹙\r윻ཙ겄";
      ppuStack_c8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_c8 < 0) {
        puStack_cc = (undefined1 *)0x50628c;
        FUN_00878dfb();
      }
      ppuStack_c8 = (undefined **)*puVar3;
      puStack_cc = (undefined1 *)0x506293;
      iVar1 = FUN_005d90ec();
      ppuVar5 = ppuStack_c8;
      if (iVar1 != 0) {
        ppuStack_d0 = (undefined **)&ppuStack_c8;
        *(undefined ****)(unaff_EBP + -0x14) = &ppuStack_c8;
        puStack_cc = (undefined1 *)0x64b;
        pwStack_d4 = (wchar_t *)0x5062b2;
        FUN_00679e4e();
        puStack_cc = (undefined1 *)*puVar3;
        pwStack_d4 = (wchar_t *)(unaff_EBP + -0x34);
        *(undefined ****)(unaff_EBP + -0x14) = &ppuStack_d0;
        uStack_d8 = 0x5062c3;
        FUN_00424dbc();
        pwStack_d4 = (wchar_t *)(unaff_EBP + -0x28);
        uStack_d8 = 0x5062cc;
        ppuStack_c8 = (undefined **)FUN_007d6c55();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_cc = (undefined1 *)0x5062dc;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        ppuStack_c8 = (undefined **)0x5062e8;
        FUN_00414ebb();
        ppuStack_c8 = (undefined **)0x0;
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_cc;
        ppuStack_d0 = (undefined **)u_spendCP_00964f54;
        pwStack_d4 = (wchar_t *)0x5062f9;
        FUN_004033a1();
        ppuStack_d0 = (undefined **)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        pwStack_d4 = (wchar_t *)0x506309;
        FUN_0040263d();
        pwStack_d4 = 
        L"왐ﱅ\xe818숶\xfff0䚉贈鱅왐ﱅ\xe813좙￯쒃㬌緇倆쓨㜪茀ೆｪ瑨鞄謀\xe8ce\xeb95\xfff0䖋㯰웇ﱅ琏謆倈凿（ࡅ䖋㬈큅谏﹉\xffff块譑觌ࡥ䡨陏\xe800퀧￯䖍傜䶍웤ﱅ\xe80f슳￯좋Ꮸ\xefe5诿웈ﱅ\xe81a켘￯윻䖉觐\xe07dᵴ䖍僐䶍\xe8e0\xe77e￯윻ൽȽ@璀倆㣨㜪贀鱅왐ﱅ\xe81c쟳￯윻絙倆⃨㜪㤀\xe07dੵͨ@\xe880⨑7䶋\xe8e0歛\xfff0윻䖉觘ࡽ踏³"
        ;
        puStack_cc = (undefined1 *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        ppuStack_d0 = (undefined **)0x50631a;
        uVar4 = FUN_00412550();
        puVar3[2] = uVar4;
        ppuStack_d0 = (undefined **)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        pwStack_d4 = 
        L"쒃㬌緇倆쓨㜪茀ೆｪ瑨鞄謀\xe8ce\xeb95\xfff0䖋㯰웇ﱅ琏謆倈凿（ࡅ䖋㬈큅谏﹉\xffff块譑觌ࡥ䡨陏\xe800퀧￯䖍傜䶍웤ﱅ\xe80f슳￯좋Ꮸ\xefe5诿웈ﱅ\xe81a켘￯윻䖉觐\xe07dᵴ䖍僐䶍\xe8e0\xe77e￯윻ൽȽ@璀倆㣨㜪贀鱅왐ﱅ\xe81c쟳￯윻絙倆⃨㜪㤀\xe07dੵͨ@\xe880⨑7䶋\xe8e0歛\xfff0윻䖉觘ࡽ踏³"
        ;
        ppuStack_c8 = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_c8 < 0) {
          puStack_cc = (undefined1 *)0x506337;
          FUN_00878dfb();
        }
        ppuStack_c8 = (undefined **)0xffffffff;
        puStack_cc = &DAT_00978474;
        ppuStack_d0 = (undefined **)0x506348;
        FUN_00414edd();
        ppuVar5 = extraout_ECX_02;
      }
      ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (ppuStack_c8 != (undefined **)0x0) {
        puStack_cc = (undefined1 *)0x506359;
        (**(code **)(*ppuStack_c8 + 8))();
        ppuVar5 = extraout_ECX_03;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x30));
  }
  ppuStack_c8 = (undefined **)0x0;
  puStack_cc = (undefined1 *)0x0;
  *(undefined ****)(unaff_EBP + 8) = &ppuStack_d0;
  pwStack_d4 = u_skill_00964f48;
  uStack_d8 = 0x50637a;
  ppuStack_d0 = ppuVar5;
  FUN_004033a1();
  pwStack_d4 = (wchar_t *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d8 = 0x50638a;
  FUN_0040263d();
  uStack_d8 = 0x506391;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  ppuStack_d0 = (undefined **)0x50639c;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x30) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 != 0) {
    ppuStack_c8 = (undefined **)(unaff_EBP + -0x30);
    puStack_cc = (undefined1 *)0x5063b2;
    ppuStack_c8 = (undefined **)FUN_00404b30();
    if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
      puStack_cc = (undefined1 *)0x5063c3;
      FUN_00878dfb();
    }
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_cc = (undefined1 *)0x5063d0;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x5063db;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    ppuStack_c8 = (undefined **)0x80004003;
    puStack_cc = (undefined1 *)0x5063ea;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)0x5063f2;
  iVar1 = FUN_0040cf4d();
  *(int *)(unaff_EBP + -0x28) = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (0 < iVar1) {
    do {
      ppuStack_c8 = (undefined **)0x506408;
      FUN_0087a1b0();
      ppuStack_c8 = (undefined **)0x0;
      ppuStack_d0 = *(undefined ***)(unaff_EBP + 8);
      pwStack_d4 = 
      L"譙觌\xec65\xe850쾁￯䖍催䶍웠ﱅ\xe81c숍￯좋淨\xefe4僿䗆Ỽ࿨\xf0c1觿\xf045䖍催䗆᳼狨\xefc7菿ೄ윻ٽ\xe850⦝7痿诰頍霺\xe800뺙\x14\x00032f3b㉴䖋櫈跿Ⲉ\a\xe800໦"
      ;
      puStack_cc = &stack0xffffff3c;
      ppuStack_d0 = (undefined **)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_cc;
      pwStack_d4 = 
      L"䖍催䶍웠ﱅ\xe81c숍￯좋淨\xefe4僿䗆Ỽ࿨\xf0c1觿\xf045䖍催䗆᳼狨\xefc7菿ೄ윻ٽ\xe850⦝7痿诰頍霺\xe800뺙\x14\x00032f3b㉴䖋櫈跿Ⲉ\a\xe800໦"
      ;
      FUN_004033a1();
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      pwStack_d4 = 
      L"좋淨\xefe4僿䗆Ỽ࿨\xf0c1觿\xf045䖍催䗆᳼狨\xefc7菿ೄ윻ٽ\xe850⦝7痿诰頍霺\xe800뺙\x14\x00032f3b㉴䖋櫈跿Ⲉ\a\xe800໦"
      ;
      FUN_0040263d();
      pwStack_d4 = 
      L"왐ﱅ\xe81e섏\xfff0䖉跰걅왐ﱅ\xe81c읲￯쒃㬌緇倆鷨㜩＀\xf075උ㪘\x97駨ᒾ謀㯘瓟謲졅ｪ袍ܬ"
      ;
      puStack_cc = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      ppuStack_d0 = (undefined **)0x506441;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      pwStack_d4 = L"쒃㬌緇倆鷨㜩＀\xf075උ㪘\x97駨ᒾ謀㯘瓟謲졅ｪ袍ܬ";
      ppuStack_c8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_c8 < 0) {
        puStack_cc = (undefined1 *)0x50645e;
        FUN_00878dfb();
      }
      ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x10);
      puStack_cc = (undefined1 *)0x50646c;
      ppuVar5 = (undefined **)FUN_00652305();
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_c8 = (undefined **)0xffffffff;
        puStack_cc = (undefined1 *)0x506482;
        puVar3 = (undefined4 *)FUN_00507368();
        *puVar3 = *(undefined4 *)(unaff_EBP + -0x10);
        puStack_cc = (undefined1 *)0x506492;
        ppuStack_c8 = ppuVar5;
        FUN_00414f8b();
        ppuStack_c8 = ppuVar5 + 1;
        puVar3[2] = ppuVar5[2];
        puStack_cc = (undefined1 *)0x5064a4;
        FUN_00414f8b();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x28));
  }
  ppuStack_c8 = (undefined **)0x0;
  puStack_cc = (undefined1 *)0x0;
  *(undefined ****)(unaff_EBP + 8) = &ppuStack_d0;
  pwStack_d4 = u_guardian_00964f34;
  uStack_d8 = 0x5064c5;
  FUN_004033a1();
  pwStack_d4 = (wchar_t *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uStack_d8 = 0x5064d5;
  FUN_0040263d();
  uStack_d8 = 0x5064dc;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  ppuStack_d0 = (undefined **)0x5064e7;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    ppuStack_c8 = (undefined **)(unaff_EBP + -0x28);
    puStack_cc = (undefined1 *)0x5064fd;
    ppuStack_c8 = (undefined **)FUN_00404b30();
    if (((int)ppuStack_c8 < 0) && (ppuStack_c8 != (undefined **)0x80004002)) {
      puStack_cc = (undefined1 *)0x50650e;
      FUN_00878dfb();
    }
  }
  ppuStack_c8 = (undefined **)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_cc = (undefined1 *)0x50651b;
  ppuStack_c8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_c8 < 0) {
    puStack_cc = (undefined1 *)0x506526;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    ppuStack_c8 = (undefined **)0x80004003;
    puStack_cc = (undefined1 *)0x506535;
    FUN_00878dfb();
  }
  ppuStack_c8 = (undefined **)0x50653d;
  iVar1 = FUN_0040cf4d();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (0 < iVar1) {
    do {
      ppuStack_c8 = (undefined **)0x506553;
      FUN_0087a1b0();
      ppuStack_c8 = (undefined **)0x0;
      ppuStack_d0 = *(undefined ***)(unaff_EBP + 8);
      pwStack_d4 = 
      L"譙觌\xec65\xe850츶￯䖍傌䶍웜ﱅ\xe822샂￯좋⋨\xefe3僿䗆⓼쓨\xf0bf觿\xf045䖍傌䗆⋼⟨\xefc6菿ೄ윻ٽ\xe850⡒7痿诰頍霺\xe800쇘\x14\x00032f3b㉴䖋櫈跿よ\a\xe800ඛ"
      ;
      puStack_cc = &stack0xffffff3c;
      ppuStack_d0 = (undefined **)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_cc;
      pwStack_d4 = 
      L"䖍傌䶍웜ﱅ\xe822샂￯좋⋨\xefe3僿䗆⓼쓨\xf0bf觿\xf045䖍傌䗆⋼⟨\xefc6菿ೄ윻ٽ\xe850⡒7痿诰頍霺\xe800쇘\x14\x00032f3b㉴䖋櫈跿よ\a\xe800ඛ"
      ;
      FUN_004033a1();
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      pwStack_d4 = 
      L"좋⋨\xefe3僿䗆⓼쓨\xf0bf觿\xf045䖍傌䗆⋼⟨\xefc6菿ೄ윻ٽ\xe850⡒7痿诰頍霺\xe800쇘\x14\x00032f3b㉴䖋櫈跿よ\a\xe800ඛ"
      ;
      FUN_0040263d();
      pwStack_d4 = (wchar_t *)0x506582;
      puStack_cc = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      ppuStack_d0 = (undefined **)0x50658c;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      ppuStack_d0 = (undefined **)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      pwStack_d4 = (wchar_t *)0x50659c;
      ppuStack_c8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_c8 < 0) {
        puStack_cc = (undefined1 *)0x5065a9;
        FUN_00878dfb();
      }
      ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x10);
      puStack_cc = (undefined1 *)0x5065b7;
      ppuVar5 = (undefined **)FUN_0065278f();
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_c8 = (undefined **)0xffffffff;
        puStack_cc = (undefined1 *)0x5065cd;
        puVar3 = (undefined4 *)FUN_00507368();
        *puVar3 = *(undefined4 *)(unaff_EBP + -0x10);
        puStack_cc = (undefined1 *)0x5065dd;
        ppuStack_c8 = ppuVar5;
        FUN_00414f8b();
        ppuStack_c8 = ppuVar5 + 1;
        puVar3[2] = ppuVar5[2];
        puStack_cc = (undefined1 *)0x5065ef;
        FUN_00414f8b();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x2c));
  }
  ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (ppuStack_c8 != (undefined **)0x0) {
    puStack_cc = (undefined1 *)0x50660f;
    (**(code **)(*ppuStack_c8 + 8))();
  }
  ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (ppuStack_c8 != (undefined **)0x0) {
    puStack_cc = (undefined1 *)0x506620;
    (**(code **)(*ppuStack_c8 + 8))();
  }
  ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (ppuStack_c8 != (undefined **)0x0) {
    puStack_cc = (undefined1 *)0x506631;
    (**(code **)(*ppuStack_c8 + 8))();
  }
  ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (ppuStack_c8 != (undefined **)0x0) {
    puStack_cc = (undefined1 *)0x506642;
    (**(code **)(*ppuStack_c8 + 8))();
  }
  ppuStack_c8 = *(undefined ***)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (ppuStack_c8 != (undefined **)0x0) {
    puStack_cc = (undefined1 *)0x506653;
    (**(code **)(*ppuStack_c8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


