/* FUN_005df4eb - 0x005df4eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005df4eb(void)

{
  short sVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  wchar_t *extraout_ECX_04;
  int unaff_EBP;
  undefined1 *puVar9;
  undefined1 *puStack_19c;
  int *piStack_198;
  undefined1 *puStack_194;
  wchar_t *pwStack_190;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x48) = extraout_ECX;
  pwStack_190 = (wchar_t *)0x5df512;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pwStack_190 = (wchar_t *)0x5df523;
  FUN_00403191();
  pwStack_190 = (wchar_t *)0x0;
  puStack_194 = (undefined1 *)(unaff_EBP + -0xa8);
  piStack_198 = (int *)(unaff_EBP + -0xb8);
  *(undefined1 ***)(unaff_EBP + -0x40) = &puStack_19c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_19c = extraout_ECX_00;
  FUN_00679e4e(&puStack_19c,0x8a1);
  iVar4 = unaff_EBP + -0x118;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_194 = (undefined1 *)0x5df576;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x4c) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar4 != 0) {
    pwStack_190 = (wchar_t *)0x5df58c;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      pwStack_190 = (wchar_t *)0x5df59d;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pwStack_190 = (wchar_t *)0x5df5ad;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pwStack_190 = (wchar_t *)0x5df5b8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pwStack_190 = (wchar_t *)0x5df5c8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pwStack_190 = (wchar_t *)0x5df5d3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pwStack_190 = (wchar_t *)0x5df5e3;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pwStack_190 = (wchar_t *)0x5df5ee;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    pwStack_190 = (wchar_t *)0x5df5fd;
    FUN_00878dfb();
  }
  pwStack_190 = (wchar_t *)0x5df609;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pwStack_190 = 
  L"䶍\xe8ac㆕￢䖍傈ᗿ苸\x8e䗆௼嶉㦤졝ੵͨ@\xe880鞽)䖋诈贈ꑕ赒衕橒倁凿蔌࿀妅\a贀衅赐큅\xe850掽￢奙䖋㯐웃ﱅ琌謄\xeb00㌂僀觨⦫夀䶍觨뱅嶉\xe8ecཇ"
  ;
  FUN_004035f5();
  FUN_004027b3();
  pwStack_190 = 
  L"䗆௼嶉㦤졝ੵͨ@\xe880鞽)䖋诈贈ꑕ赒衕橒倁凿蔌࿀妅\a贀衅赐큅\xe850掽￢奙䖋㯐웃ﱅ琌謄\xeb00㌂僀觨⦫夀䶍觨뱅嶉\xe8ecཇ"
  ;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x38) == 0) {
      pwStack_190 = 
      L"䖋诈贈ꑕ赒衕橒倁凿蔌࿀妅\a贀衅赐큅\xe850掽￢奙䖋㯐웃ﱅ琌謄\xeb00㌂僀觨⦫夀䶍觨뱅嶉\xe8ecཇ"
      ;
      FUN_00878dfb();
    }
    piStack_198 = *(int **)(unaff_EBP + -0x38);
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x78);
    puStack_194 = (undefined1 *)0x1;
    puStack_19c = (undefined1 *)0x5df651;
    iVar4 = (**(code **)(*piStack_198 + 0xc))();
    if (iVar4 != 0) break;
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x30);
    puStack_194 = (undefined1 *)0x5df666;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    pwStack_190 = (wchar_t *)0x5df67f;
    uVar5 = FUN_0087a208();
    *(undefined4 *)(unaff_EBP + -0x44) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_005e05d5();
    pwStack_190 = (wchar_t *)0x0;
    piStack_198 = (int *)(unaff_EBP + -0x30);
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_194;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_19c = (undefined1 *)0x5df6a3;
    FUN_004059fd();
    piStack_198 = (int *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_19c = (undefined1 *)0x5df6b6;
    FUN_0040263d();
    puStack_19c = (undefined1 *)0x5df6bd;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_194 = (undefined1 *)0x5df6c8;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -100) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar4 != 0) {
      pwStack_190 = (wchar_t *)0x5df6de;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        pwStack_190 = L"薍ﻈ\xffff왐ﱅ\xe811㓄￢쌻絙倆\xf1e8⦖匀兓쒋斉棰Ψ";
        FUN_00878dfb();
      }
    }
    puVar9 = (undefined1 *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    pwStack_190 = L"쌻絙倆\xf1e8⦖匀兓쒋斉棰Ψ";
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5df70a;
      FUN_00878dfb();
      puVar9 = extraout_ECX_01;
    }
    pwStack_190 = (wchar_t *)0x0;
    puStack_19c = (undefined1 *)&puStack_194;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_194;
    piStack_198 = (int *)0x3a8;
    puStack_194 = puVar9;
    FUN_00679e4e();
    piStack_198 = (int *)(unaff_EBP + -0xf8);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_19c = (undefined1 *)0x5df735;
    FUN_0040263d();
    puStack_19c = (undefined1 *)0x5df73c;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_194 = (undefined1 *)0x5df747;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar4 != 0) {
      pwStack_190 = (wchar_t *)0x5df75d;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        pwStack_190 = (wchar_t *)0x5df76e;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    pwStack_190 = (wchar_t *)0x5df77e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5df789;
      FUN_00878dfb();
    }
    puVar9 = (undefined1 *)0x0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        pwStack_190 = (wchar_t *)0x5df79a;
        FUN_00878dfb();
      }
      puVar6 = (undefined1 *)FUN_0040cf4d();
      if (puVar6 <= puVar9) break;
      FUN_0087a1b0();
      piStack_198 = (int *)0x5df7b8;
      puStack_194 = puVar9;
      pwStack_190 = (wchar_t *)&stack0xfffffe78;
      puStack_194 = (undefined1 *)FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_190;
      piStack_198 = (int *)0x5df7c4;
      FUN_004033a1();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x178);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_198 = (int *)0x5df7d7;
      FUN_0040263d();
      piStack_198 = (int *)0x5df7de;
      pwStack_190 = (wchar_t *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_194 = (undefined1 *)0x5df7e8;
      uVar5 = FUN_00412550();
      pwStack_190 = 
      L"ら薍ﺈ\xffff왐ﱅ\xe815㎸￢쌻絙倆\xe5e8⦕䜀濩\xffff叿兓쒋斉棰ࢥ";
      puVar7 = (undefined4 *)FUN_0045f1e3();
      *puVar7 = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pwStack_190 = L"쌻絙倆\xe5e8⦕䜀濩\xffff叿兓쒋斉棰ࢥ";
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pwStack_190 = (wchar_t *)0x5df816;
        FUN_00878dfb();
      }
      puVar9 = puVar9 + 1;
    }
    pwStack_190 = (wchar_t *)0x0;
    puStack_19c = (undefined1 *)&puStack_194;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_194;
    piStack_198 = (int *)0x8a5;
    FUN_00679e4e();
    piStack_198 = (int *)(unaff_EBP + -200);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_19c = (undefined1 *)0x5df847;
    FUN_0040263d();
    puStack_19c = (undefined1 *)0x5df84e;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_194 = (undefined1 *)0x5df859;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x60) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar4 != 0) {
      pwStack_190 = (wchar_t *)0x5df86f;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        pwStack_190 = (wchar_t *)0x5df880;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    pwStack_190 = (wchar_t *)0x5df890;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5df89b;
      FUN_00878dfb();
    }
    puVar9 = (undefined1 *)0x0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        pwStack_190 = (wchar_t *)0x5df8ac;
        FUN_00878dfb();
      }
      puVar6 = (undefined1 *)FUN_0040cf4d();
      if (puVar6 <= puVar9) break;
      FUN_0087a1b0();
      piStack_198 = (int *)0x5df8ca;
      puStack_194 = puVar9;
      pwStack_190 = (wchar_t *)&stack0xfffffe78;
      puStack_194 = (undefined1 *)FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_190;
      piStack_198 = (int *)0x5df8d6;
      FUN_004033a1();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x158);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_198 = (int *)0x5df8e9;
      FUN_0040263d();
      piStack_198 = (int *)0x5df8f0;
      pwStack_190 = (wchar_t *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_194 = (undefined1 *)0x5df8fa;
      uVar5 = FUN_00412550();
      pwStack_190 = L"ら薍ﺨ\xffff왐ﱅ\xe81b㊦￢쌻絙倆폨⦔䜀濩\xffff凿쒋斉棰ࢤ";
      puVar7 = (undefined4 *)FUN_0045f1e3();
      *puVar7 = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      pwStack_190 = L"쌻絙倆폨⦔䜀濩\xffff凿쒋斉棰ࢤ";
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pwStack_190 = (wchar_t *)0x5df928;
        FUN_00878dfb();
      }
      puVar9 = puVar9 + 1;
    }
    puStack_194 = &stack0xfffffe74;
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe74;
    pwStack_190 = (wchar_t *)0x8a4;
    piStack_198 = (int *)0x5df946;
    FUN_00679e4e();
    pwStack_190 = (wchar_t *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_194 = (undefined1 *)0x5df959;
    FUN_0040263d();
    puStack_194 = (undefined1 *)0x5df960;
    psVar8 = (short *)FUN_004048a4();
    sVar1 = *psVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (sVar1 == 8) {
      pwStack_190 = *(wchar_t **)(psVar8 + 4);
    }
    else {
      pwStack_190 = (wchar_t *)&DAT_0097812c;
    }
    puStack_194 = (undefined1 *)0x5df982;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    pwStack_190 = (wchar_t *)0x5df992;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = L"嶉棄ά";
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_194 = (undefined1 *)0x5df9b4;
    puVar7 = (undefined4 *)FUN_00679d22();
    pwStack_190 = (wchar_t *)*puVar7;
    puStack_194 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_198 = (int *)0x5df9c7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00414ebb();
    pwStack_190 = 
    L"赖梍\xffff웿ﱅ\xe822㞚￢卓薍ｸ\xffff赐梅\xffff僿䶍웄ﱅ\xe823鴀￦譑觌\xf065\xe850迸￦薍８\xffff왐ﱅ\xe823忮￢좋⫨\xe22c诿\xe8c8俅￢좋䗆◼注\xe238㯿觃顅嶉瓌贝顅赐챍틨\xe250㯿緃㴍䀂耀ٴ\xe850鎌)薍８\xffff왐ﱅ\xe829ㅄ￢쌻絙倆燨⦓贀梅\xffff僿䗆⣼⧨\xe231㯿姃ٽ\xe850鍖)薍ｸ\xffff왐ﱅ\xe827ㄎ￢쌻絙倆㯨⦓匀兓쒋斉棰δ"
    ;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    pwStack_190 = 
    L"卓薍ｸ\xffff赐梅\xffff僿䶍웄ﱅ\xe823鴀￦譑觌\xf065\xe850迸￦薍８\xffff왐ﱅ\xe823忮￢좋⫨\xe22c诿\xe8c8俅￢좋䗆◼注\xe238㯿觃顅嶉瓌贝顅赐챍틨\xe250㯿緃㴍䀂耀ٴ\xe850鎌)薍８\xffff왐ﱅ\xe829ㅄ￢쌻絙倆燨⦓贀梅\xffff僿䗆⣼⧨\xe231㯿姃ٽ\xe850鍖)薍ｸ\xffff왐ﱅ\xe827ㄎ￢쌻絙倆㯨⦓匀兓쒋斉棰δ"
    ;
    FUN_00403191();
    pwStack_190 = (wchar_t *)0x0;
    puStack_194 = (undefined1 *)(unaff_EBP + -0x88);
    piStack_198 = (int *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_19c = (undefined1 *)0x5dfa13;
    uVar5 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_19c;
    FUN_00448a17(uVar5);
    iVar4 = unaff_EBP + -0xe8;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_194 = (undefined1 *)0x5dfa48;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar4 != 0) {
      pwStack_190 = (wchar_t *)0x5dfa5e;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        pwStack_190 = 
        L"薍８\xffff왐ﱅ\xe829ㅄ￢쌻絙倆燨⦓贀梅\xffff僿䗆⣼⧨\xe231㯿姃ٽ\xe850鍖)薍ｸ\xffff왐ﱅ\xe827ㄎ￢쌻絙倆㯨⦓匀兓쒋斉棰δ"
        ;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    pwStack_190 = 
    L"쌻絙倆燨⦓贀梅\xffff僿䗆⣼⧨\xe231㯿姃ٽ\xe850鍖)薍ｸ\xffff왐ﱅ\xe827ㄎ￢쌻絙倆㯨⦓匀兓쒋斉棰δ"
    ;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5dfa8a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    pwStack_190 = (wchar_t *)0x5dfa9a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = L"薍ｸ\xffff왐ﱅ\xe827ㄎ￢쌻絙倆㯨⦓匀兓쒋斉棰δ";
      FUN_00878dfb();
    }
    puVar9 = (undefined1 *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    pwStack_190 = L"쌻絙倆㯨⦓匀兓쒋斉棰δ";
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5dfac0;
      FUN_00878dfb();
      puVar9 = extraout_ECX_02;
    }
    pwStack_190 = (wchar_t *)0x0;
    puStack_19c = (undefined1 *)&puStack_194;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_194;
    piStack_198 = (int *)0x3b4;
    puStack_194 = puVar9;
    FUN_00679e4e();
    piStack_198 = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_19c = (undefined1 *)0x5dfae8;
    FUN_0040263d();
    puStack_19c = (undefined1 *)0x5dfaef;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    puStack_194 = (undefined1 *)0x5dfafa;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x40) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar4 != 0) {
      pwStack_190 = (wchar_t *)0x5dfb10;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        pwStack_190 = (wchar_t *)0x5dfb21;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    pwStack_190 = (wchar_t *)0x5dfb31;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = (wchar_t *)0x5dfb3c;
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe74;
    pwStack_190 = u_defaultHP_00965b58;
    puStack_194 = (undefined1 *)0x5dfb4c;
    FUN_004033a1();
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x128);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    puStack_194 = (undefined1 *)0x5dfb5f;
    FUN_0040263d();
    puStack_194 = (undefined1 *)0x5dfb66;
    psVar8 = (short *)FUN_004048a4();
    sVar1 = *psVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (sVar1 == 8) {
      pwStack_190 = *(wchar_t **)(psVar8 + 4);
    }
    else {
      pwStack_190 = (wchar_t *)&DAT_0097812c;
    }
    puStack_194 = (undefined1 *)0x5dfb85;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    pwStack_190 = L"쌻絙倆寨⦒謀\xec45\x8b쌻Ѵᠸ桵兓쒋斉棰ٓ";
    pwVar3 = (wchar_t *)(unaff_EBP + -0x128);
    iVar4 = FUN_00402bc3();
    pwStack_190 = pwVar3;
    if (iVar4 < 0) {
      pwStack_190 = 
      L"䖋诬㬀瓃㠄甘卨譑规\xf065卨\x06倀쾋跨ঢ贀뢅\xfffe僿䶍웤ﱅ\xe82d⩩￢좋짨\xe24c僿䗆ㇼ毨\xe329诿跰뢅\xfffe僿䗆ⷼ쳨\xe22f菿ೄ쌻ٽ\xe850釷)桖䝼\x96痿\xe8ec刏￥쒃儌첋斉棰孄\x96糨\xe237跿颅\xfffe僿䶍웤ﱅ\xe82d⨅￢좋旨\xe24c替㢃예ﱅ申謅ࡀ׫Ⲹ鞁謀\xec4dｪ솃倄⃨\xe744跿颅\xfffe僿䗆ⷼ勨\xe22f㯿姃ٽ\xe850酿)䖋诬р쌻Ѵᠸ汵兓쒋斉棰ٔ"
      ;
      FUN_00878dfb();
      pwStack_190 = extraout_ECX_03;
    }
    if (((char *)**(undefined4 **)(unaff_EBP + -0x14) == (char *)0x0) ||
       (*(char *)**(undefined4 **)(unaff_EBP + -0x14) == '\0')) {
      piStack_198 = (int *)&pwStack_190;
      *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_190;
      puStack_194 = (undefined1 *)0x653;
      puStack_19c = (undefined1 *)0x5dfbc1;
      FUN_00679e4e();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_198 = (int *)0x5dfbd4;
      FUN_0040263d();
      piStack_198 = (int *)0x5dfbdb;
      pwStack_190 = (wchar_t *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      puStack_194 = (undefined1 *)0x5dfbe5;
      FUN_00412550();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_198 = (int *)0x5dfbf7;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pwStack_190 = 
        L"桖䝼\x96痿\xe8ec刏￥쒃儌첋斉棰孄\x96糨\xe237跿颅\xfffe僿䶍웤ﱅ\xe82d⨅￢좋旨\xe24c替㢃예ﱅ申謅ࡀ׫Ⲹ鞁謀\xec4dｪ솃倄⃨\xe744跿颅\xfffe僿䗆ⷼ勨\xe22f㯿姃ٽ\xe850酿)䖋诬р쌻Ѵᠸ汵兓쒋斉棰ٔ"
        ;
        FUN_00878dfb();
      }
      pwStack_190 = (wchar_t *)&DAT_0096477c;
      puStack_194 = *(undefined1 **)(unaff_EBP + -0x14);
      piStack_198 = (int *)0x5dfc12;
      FUN_00434e21();
    }
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe74;
    pwStack_190 = u_defaultMP_00965b44;
    puStack_194 = (undefined1 *)0x5dfc25;
    FUN_004033a1();
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x168);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    puStack_194 = (undefined1 *)0x5dfc38;
    FUN_0040263d();
    puStack_194 = (undefined1 *)0x5dfc3f;
    psVar8 = (short *)FUN_004048a4();
    sVar1 = *psVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    if (sVar1 == 8) {
      pwStack_190 = *(wchar_t **)(psVar8 + 4);
    }
    else {
      pwStack_190 = (wchar_t *)&DAT_0097812c;
    }
    puStack_194 = (undefined1 *)0x5dfc61;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    pwStack_190 = 
    L"쌻絙倆翨⦑謀\xec45䂋㬄瓃㠄甘卬譑规\xf065周\x06倀쾋냨ড贀碅\xfffe僿䶍웤ﱅ\xe82d⦌￢좋\xece8\xe24b僿䗆㗼軨\xe328诿跰碅\xfffe僿䗆ⷼ\xefe8\xe22e菿ೄ쌻ٽ\xe850鄚)䖋囬삃栄䝼\x96\xe850儮￥쒃贌\xe845赐뱅譐롅袍\x88"
    ;
    pwVar3 = (wchar_t *)(unaff_EBP + -0x168);
    iVar4 = FUN_00402bc3();
    pwStack_190 = pwVar3;
    if (iVar4 < 0) {
      pwStack_190 = L"䖋诬р쌻Ѵᠸ汵兓쒋斉棰ٔ";
      FUN_00878dfb();
      pwStack_190 = extraout_ECX_04;
    }
    pcVar2 = *(char **)(*(int *)(unaff_EBP + -0x14) + 4);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      piStack_198 = (int *)&pwStack_190;
      *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_190;
      puStack_194 = (undefined1 *)0x654;
      puStack_19c = (undefined1 *)0x5dfc9e;
      FUN_00679e4e();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x188);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_198 = (int *)0x5dfcb1;
      FUN_0040263d();
      piStack_198 = (int *)0x5dfcb8;
      pwStack_190 = (wchar_t *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      puStack_194 = (undefined1 *)0x5dfcc2;
      FUN_00412550();
      puStack_194 = (undefined1 *)(unaff_EBP + -0x188);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      piStack_198 = (int *)0x5dfcd4;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pwStack_190 = L"䖋囬삃栄䝼\x96\xe850儮￥쒃贌\xe845赐뱅譐롅袍\x88";
        FUN_00878dfb();
      }
      puStack_194 = (undefined1 *)(*(int *)(unaff_EBP + -0x14) + 4);
      pwStack_190 = (wchar_t *)&DAT_0096477c;
      piStack_198 = (int *)0x5dfcf3;
      FUN_00434e21();
    }
    pwStack_190 = (wchar_t *)(unaff_EBP + -0x44);
    puStack_194 = (undefined1 *)0x5dfd0c;
    FUN_005e0c0a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      pwStack_190 = (wchar_t *)0x5dfd1d;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      pwStack_190 = (wchar_t *)0x5dfd2e;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      pwStack_190 = 
      L"䖋㯔웃ﱅ琑謆倈凿謈\xe045쌻䗆෼ٴࢋｐࡑ崹웬ﱅ琌匌䶍\xe8e8ࣽ";
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      pwStack_190 = (wchar_t *)0x5dfd5c;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      pwStack_190 = L"崹웬ﱅ琌匌䶍\xe8e8ࣽ";
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      pwStack_190 = 
      L"嶉诬큍쬻䗆௼ࡴῨ\xe233觿큝䖍傈◨\xe22e㯿姃贏\xf888\xffff\xe850過)緩\xfff8跿衅왐ﱅ\xe80a⸄￢쌻絙倆㇨⦐謀졅쌻䗆׼ٴࢋｐࡑ䖋菜ﱍ㯿瓃謆倈凿謈\xf44dŪ赘沥\xfffe忿摞ඉ"
      ;
      FUN_005e067c();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
    }
    pwStack_190 = (wchar_t *)0x5dfd9e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pwStack_190 = 
      L"緩\xfff8跿衅왐ﱅ\xe80a⸄￢쌻絙倆㇨⦐謀졅쌻䗆׼ٴࢋｐࡑ䖋菜ﱍ㯿瓃謆倈凿謈\xf44dŪ赘沥\xfffe忿摞ඉ"
      ;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pwStack_190 = 
  L"쌻絙倆㇨⦐謀졅쌻䗆׼ٴࢋｐࡑ䖋菜ﱍ㯿瓃謆倈凿謈\xf44dŪ赘沥\xfffe忿摞ඉ"
  ;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pwStack_190 = (wchar_t *)0x5dfdca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    pwStack_190 = L"䖋菜ﱍ㯿瓃謆倈凿謈\xf44dŪ赘沥\xfffe忿摞ඉ";
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    pwStack_190 = L"䶋櫴堁ꖍ﹬\xffff幟襤\r";
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


