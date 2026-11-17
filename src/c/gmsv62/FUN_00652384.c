/* FUN_00652384 - 0x00652384 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00652384(void)

{
  short sVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_d8;
  int *piStack_d4;
  wchar_t *pwStack_d0;
  wchar_t *pwStack_cc;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff3c;
  *(undefined4 *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pwStack_cc = (wchar_t *)0x6523b0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pwStack_cc = (wchar_t *)0x6523bd;
  FUN_00403191();
  pwStack_cc = (wchar_t *)0x0;
  pwStack_d0 = (wchar_t *)(unaff_EBP + -0x74);
  piStack_d4 = (int *)(unaff_EBP + -100);
  *(undefined4 **)(unaff_EBP + -0x30) = &uStack_d8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_d8 = extraout_ECX_00;
  FUN_004033a1(u_Skill_MCGuardian_img_00968a40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00404a02(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pwStack_d0 = (wchar_t *)0x652408;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    pwStack_cc = (wchar_t *)0x65241e;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      pwStack_cc = (wchar_t *)0x65242f;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pwStack_cc = (wchar_t *)0x65243f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pwStack_cc = (wchar_t *)0x65244a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pwStack_cc = (wchar_t *)0x652457;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pwStack_cc = (wchar_t *)0x652462;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pwStack_cc = (wchar_t *)0x65246f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pwStack_cc = (wchar_t *)0x65247a;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    pwStack_cc = (wchar_t *)0x652489;
    FUN_00878dfb();
  }
  pwStack_cc = (wchar_t *)0x652495;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pwStack_cc = (wchar_t *)0x6524a2;
  FUN_004035f5();
  FUN_004027b3();
  pwStack_cc = (wchar_t *)0x6524b4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      pwStack_cc = (wchar_t *)0x6524cf;
      FUN_00878dfb();
    }
    piStack_d4 = *(int **)(unaff_EBP + -0x28);
    pwStack_cc = (wchar_t *)(unaff_EBP + -0x54);
    pwStack_d0 = (wchar_t *)0x1;
    uStack_d8 = 0x6524e2;
    iVar2 = (**(code **)(*piStack_d4 + 0xc))();
    if (iVar2 != 0) break;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    FUN_00654597();
    pwStack_cc = (wchar_t *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    pwStack_d0 = (wchar_t *)0x652506;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
      pwVar3 = (wchar_t *)0x0;
    }
    else {
      pwVar3 = (wchar_t *)**(undefined4 **)(unaff_EBP + -0x1c);
    }
    pwStack_cc = (wchar_t *)0x65251f;
    uVar4 = FUN_0087a208();
    pwStack_d0 = pwVar3;
    pwStack_cc = (wchar_t *)0x0;
    *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
    piStack_d4 = (int *)(unaff_EBP + -0x1c);
    *(wchar_t ***)(unaff_EBP + -0x2c) = &pwStack_d0;
    uStack_d8 = 0x652534;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_d4 = (int *)0x652540;
    FUN_0040263d();
    piStack_d4 = (int *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_d8 = 0x652552;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    pwStack_d0 = (wchar_t *)0x65255d;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      pwStack_cc = (wchar_t *)0x652573;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        pwStack_cc = (wchar_t *)0x652584;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_cc = (wchar_t *)0x652594;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      pwStack_cc = (wchar_t *)0x65259f;
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff38;
    pwStack_cc = u_name_00965660;
    pwStack_d0 = (wchar_t *)0x6525af;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    pwStack_cc = (wchar_t *)0x6525bb;
    FUN_0040263d();
    pwStack_cc = (wchar_t *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_d0 = (wchar_t *)0x6525cd;
    psVar5 = (short *)FUN_004048a4();
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (sVar1 == 8) {
      pwStack_cc = *(wchar_t **)(psVar5 + 4);
    }
    else {
      pwStack_cc = (wchar_t *)&DAT_0097812c;
    }
    pwStack_d0 = (wchar_t *)0x6525e9;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_cc = (wchar_t *)0x6525f9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      pwStack_cc = (wchar_t *)0x652604;
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff38;
    pwStack_cc = u_desc_00968a10;
    pwStack_d0 = (wchar_t *)0x652614;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    pwStack_cc = (wchar_t *)0x652620;
    FUN_0040263d();
    pwStack_cc = (wchar_t *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_d0 = (wchar_t *)0x652632;
    psVar5 = (short *)FUN_004048a4();
    sVar1 = *psVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (sVar1 == 8) {
      pwStack_cc = *(wchar_t **)(psVar5 + 4);
    }
    else {
      pwStack_cc = (wchar_t *)&DAT_0097812c;
    }
    pwStack_d0 = 
    L"薍｜\xffff왐ﱅ\xe812բￛ쌻絙倆迨≧匀譑觌푥周陏\xe800തￛ䶍웨ﱅ\xe817ﾴￚ趍＼\xffff譑웈ﱅ\xe812∉ￛ왐ﱅ\xe818ﺫￛ奙䶍诜\xe8f0ᶴ"
    ;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_cc = 
    L"쌻絙倆迨≧匀譑觌푥周陏\xe800തￛ䶍웨ﱅ\xe817ﾴￚ趍＼\xffff譑웈ﱅ\xe812∉ￛ왐ﱅ\xe818ﺫￛ奙䶍诜\xe8f0ᶴ"
    ;
    pwVar3 = (wchar_t *)(unaff_EBP + -0xa4);
    iVar2 = FUN_00402bc3();
    pwStack_cc = pwVar3;
    if (iVar2 < 0) {
      pwStack_cc = (wchar_t *)0x65266c;
      FUN_00878dfb();
      pwStack_cc = extraout_ECX_01;
    }
    *(wchar_t ***)(unaff_EBP + -0x2c) = &pwStack_cc;
    pwStack_d0 = u_spendCP_00964f54;
    piStack_d4 = (int *)0x65267d;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    pwStack_d0 = L"趍＼\xffff譑웈ﱅ\xe812∉ￛ왐ﱅ\xe818ﺫￛ奙䶍诜\xe8f0ᶴ";
    FUN_0040263d();
    pwStack_d0 = (wchar_t *)(unaff_EBP + -0xc4);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_d4 = (int *)0x65269b;
    pwStack_cc = (wchar_t *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    pwStack_d0 = L"奙䶍诜\xe8f0ᶴ";
    uVar4 = FUN_00412550();
    iVar2 = FUN_00654465();
    *(undefined4 *)(iVar2 + 8) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    pwStack_cc = (wchar_t *)0x6526c4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      pwStack_cc = (wchar_t *)0x6526cf;
      FUN_00878dfb();
    }
    pwStack_cc = (wchar_t *)(unaff_EBP + -0x30);
    pwStack_d0 = (wchar_t *)0x6526e2;
    FUN_00654eab();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      pwStack_cc = (wchar_t *)0x6526f3;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      pwStack_cc = (wchar_t *)0x652714;
      FUN_006546ee();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    pwStack_cc = (wchar_t *)0x652720;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      pwStack_cc = (wchar_t *)0x65272f;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  pwStack_cc = (wchar_t *)0x652741;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pwStack_cc = 
    L"䖋㯘웃ﱅ理謆倈凿謈\xec45쌻嶈瓼謆倈凿樈堁໫纸攧쌀纸攧쌀쀳䶋忴摞ඉ"
    ;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    pwStack_cc = L"䖋㯬裃ﱝٴࢋｐࡑŪ\xeb58렎❾e룃❾e㏃诀\xf44d幟襤\r";
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    pwStack_cc = L"Ū\xeb58렎❾e룃❾e㏃诀\xf44d幟襤\r";
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  FUN_00652780();
  return;
}


