/* FUN_0073293c - 0x0073293c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073293c(void)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_c8;
  int iStack_c4;
  int *piStack_c0;
  wchar_t *pwStack_a8;
  undefined1 *puStack_a4;
  wchar_t *pwStack_a0;
  wchar_t *pwStack_9c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  pwVar1 = (wchar_t *)(*(int *)(unaff_EBP + 0x10) / 100);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pwVar1 == (wchar_t *)0x9) {
    pwStack_9c = (wchar_t *)&DAT_00980690;
    pwStack_a0 = L"赓\xe04d䗆Ǽ২초跿롅赐\xe045躍׌";
    FUN_00403191();
    pwStack_9c = (wchar_t *)&DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pwStack_a0 = 
    L"䖍傸䖍跠첎\x05倀䗆˼䶉\xe810涧￑児쒋斉櫰븚뱨\x97譐\xe8ce璖\xfff4䖋茌ﻀｐࡵ䶍옔ﱅ\xe802\xec0bￍ좋旨텤跿\xe045왐ﱅ\xe801ǡￍ윻絙倆໨ᑤ耀ﱥ贀롅\xe850ǉￍ윻絙倆\xf6e8ᑣ匀䶍\xe8b8ރￍ赓\xe04d䗆Ӽ盨촇诿၍䖍傸䖍僠䗆׼᫨텭僿譑规ၥ煨\v倀캋௨\xf474诿౅삃倈痿贈ᑍ䗆׼胨췫诿\xe8c8揚￑䖍僠䗆Ӽ囨촁㯿姇ٽ\xe850掃\x14斀ü䖍傸㻨촁㯿姇ٽ\xe850捫\x14䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א"
    ;
    FUN_00403191();
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x48);
    pwStack_a0 = (wchar_t *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(int *)(unaff_EBP + 0x10) = extraout_ECX + 0x5cc;
    puStack_a4 = (undefined1 *)0x7329a2;
    puStack_a4 = (undefined1 *)FUN_00449749();
    *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_a8;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004115d9();
    FUN_00448e3a();
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pwStack_a0 = 
    L"윻絙倆໨ᑤ耀ﱥ贀롅\xe850ǉￍ윻絙倆\xf6e8ᑣ匀䶍\xe8b8ރￍ赓\xe04d䗆Ӽ盨촇诿၍䖍傸䖍僠䗆׼᫨텭僿譑规ၥ煨\v倀캋௨\xf474诿౅삃倈痿贈ᑍ䗆׼胨췫诿\xe8c8揚￑䖍僠䗆Ӽ囨촁㯿姇ٽ\xe850掃\x14斀ü䖍傸㻨촁㯿姇ٽ\xe850捫\x14䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א"
    ;
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = 
      L"斀ü䖍傸짨촁㯿姇ٽ\xe850揶\x14赓롍菨촇叿䶍웠ﱅ\xe804ݶￍ䶋贐롅赐\xe045왐ﱅ\xe805洚￑児쒋斉栐ୱ"
      ;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x48);
    pwStack_a0 = 
    L"윻絙倆\xf6e8ᑣ匀䶍\xe8b8ރￍ赓\xe04d䗆Ӽ盨촇诿၍䖍傸䖍僠䗆׼᫨텭僿譑规ၥ煨\v倀캋௨\xf474诿౅삃倈痿贈ᑍ䗆׼胨췫诿\xe8c8揚￑䖍僠䗆Ӽ囨촁㯿姇ٽ\xe850掃\x14斀ü䖍傸㻨촁㯿姇ٽ\xe850捫\x14䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א"
    ;
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = 
      L"赓롍菨촇叿䶍웠ﱅ\xe804ݶￍ䶋贐롅赐\xe045왐ﱅ\xe805洚￑児쒋斉栐ୱ";
      FUN_00878dfb();
    }
    pwStack_9c = (wchar_t *)&DAT_00980690;
    pwStack_a0 = 
    L"赓\xe04d䗆Ӽ盨촇诿၍䖍傸䖍僠䗆׼᫨텭僿譑规ၥ煨\v倀캋௨\xf474诿౅삃倈痿贈ᑍ䗆׼胨췫诿\xe8c8揚￑䖍僠䗆Ӽ囨촁㯿姇ٽ\xe850掃\x14斀ü䖍傸㻨촁㯿姇ٽ\xe850捫\x14䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א"
    ;
    FUN_00403191();
    pwStack_9c = (wchar_t *)&DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pwStack_a0 = L"䶋贐롅赐\xe045왐ﱅ\xe805洚￑児쒋斉栐ୱ";
    FUN_00403191();
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x48);
    pwStack_a0 = (wchar_t *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_a4 = (undefined1 *)0x732a2f;
    puStack_a4 = (undefined1 *)FUN_00449749();
    *(wchar_t ***)(unaff_EBP + 0x10) = &pwStack_a8;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004115d9();
    FUN_00448e3a();
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pwStack_a0 = L"윻絙倆菨ᑣ耀ﱥ贀롅\xe850ľￍ윻絙倆毨ᑣ贀ᑍ仨췻\xe9ffӢ";
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = 
      L"斀ü䖍傸㻨촁㯿姇ٽ\xe850捫\x14䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א"
      ;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x48);
    pwStack_a0 = L"윻絙倆毨ᑣ贀ᑍ仨췻\xe9ffӢ";
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = L"䶍\xe814פֿￍ\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א";
      FUN_00878dfb();
    }
    pwStack_9c = L"\xe2e9\x04圀兗첋斉棰똸\x96\xf2e8초胿ﱥ贀顅욁א";
    FUN_004125e6();
  }
  else {
    pwStack_9c = (wchar_t *)0x0;
    pwStack_a0 = (wchar_t *)0x0;
    puStack_a4 = (undefined1 *)0x64;
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_a4;
    pwStack_a8 = u_main_0096b638;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pwStack_a8 = (wchar_t *)(unaff_EBP + -0x68);
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_a4 = (undefined1 *)0x732ad6;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar2 != 0) {
      pwStack_9c = (wchar_t *)(unaff_EBP + -0x50);
      pwStack_a0 = (wchar_t *)0x732aec;
      pwStack_9c = (wchar_t *)FUN_00404b30();
      if (((int)pwStack_9c < 0) && (pwStack_9c != (wchar_t *)0x80004002)) {
        pwStack_a0 = (wchar_t *)0x732afd;
        FUN_00878dfb();
      }
    }
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    pwStack_a0 = (wchar_t *)0x732b0a;
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = (wchar_t *)0x732b15;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    puStack_a4 = (undefined1 *)(unaff_EBP + -0x30);
    pwStack_a0 = u_sub__d_0096b628;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    pwStack_a8 = (wchar_t *)0x732b2b;
    pwStack_9c = pwVar1;
    FUN_0041354c();
    pwStack_9c = (wchar_t *)0x0;
    pwStack_a0 = (wchar_t *)0x0;
    puStack_a4 = (undefined1 *)0x732b38;
    pwStack_a8 = (wchar_t *)FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_a4;
    FUN_004033a1();
    pwStack_a8 = (wchar_t *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_a4 = (undefined1 *)0x732b68;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar2 != 0) {
      pwStack_9c = (wchar_t *)(unaff_EBP + -0x58);
      pwStack_a0 = (wchar_t *)0x732b7e;
      pwStack_9c = (wchar_t *)FUN_00404b30();
      if (((int)pwStack_9c < 0) && (pwStack_9c != (wchar_t *)0x80004002)) {
        pwStack_a0 = (wchar_t *)0x732b91;
        FUN_00878dfb();
      }
    }
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    pwStack_a0 = (wchar_t *)0x732ba8;
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = (wchar_t *)0x732bb3;
      FUN_00878dfb();
    }
    pwStack_9c = (wchar_t *)0x732bbb;
    FUN_0087a1b0();
    pwStack_9c = (wchar_t *)0x0;
    pwStack_a0 = (wchar_t *)0x0;
    pwStack_a8 = pwVar1;
    puStack_a4 = &stack0xffffff68;
    pwStack_a8 = (wchar_t *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_a4;
    FUN_004033a1();
    pwStack_a8 = (wchar_t *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_a4 = (undefined1 *)0x732bf4;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x54) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar2 != 0) {
      pwStack_9c = (wchar_t *)(unaff_EBP + -0x54);
      pwStack_a0 = (wchar_t *)0x732c0a;
      pwStack_9c = (wchar_t *)FUN_0041a581();
      if (((int)pwStack_9c < 0) && (pwStack_9c != (wchar_t *)0x80004002)) {
        pwStack_a0 = (wchar_t *)0x732c18;
        FUN_00878dfb();
      }
    }
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    pwStack_a0 = (wchar_t *)0x732c25;
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = (wchar_t *)0x732c30;
      FUN_00878dfb();
    }
    pwStack_9c = (wchar_t *)0x732c38;
    FUN_0087a1b0();
    pwStack_9c = (wchar_t *)0x0;
    pwStack_a0 = (wchar_t *)0x0;
    pwStack_a8 = *(wchar_t **)(unaff_EBP + 0x10);
    puStack_a4 = &stack0xffffff68;
    pwStack_a8 = (wchar_t *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_a4;
    FUN_004033a1();
    pwStack_a8 = (wchar_t *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_a4 = (undefined1 *)0x732c76;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      pwStack_9c = (wchar_t *)(unaff_EBP + -0x4c);
      pwStack_a0 = L"윻੽옻ٴ\xe850慡\x14薍ｨ\xffff왐ﱅ\xe817９ￌ윻絙倆䛨ᑡ樀栃ÿ";
      pwStack_9c = (wchar_t *)FUN_0041a581();
      if (((int)pwStack_9c < 0) && (pwStack_9c != (wchar_t *)0x80004002)) {
        pwStack_a0 = L"薍ｨ\xffff왐ﱅ\xe817９ￌ윻絙倆䛨ᑡ樀栃ÿ";
        FUN_00878dfb();
      }
    }
    pwStack_9c = (wchar_t *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    pwStack_a0 = L"윻絙倆䛨ᑡ樀栃ÿ";
    pwStack_9c = (wchar_t *)FUN_00402bc3();
    if ((int)pwStack_9c < 0) {
      pwStack_a0 = L"ͪｨ";
      FUN_00878dfb();
    }
    pwStack_9c = (wchar_t *)0x3;
    pwStack_a0 = (wchar_t *)0xff;
    puStack_a4 = (undefined1 *)0x732cc4;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      pwStack_9c = (wchar_t *)0x80004003;
      pwStack_a0 = L"嶋謔范წﲋ痿跌\xe075ꖥꖥ綋圌痿匈郿\x80";
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + 0x14);
    pwStack_a8 = *(wchar_t **)(unaff_EBP + -0x20);
    puStack_a4 = *(undefined1 **)(unaff_EBP + -0x1c);
    pwStack_a0 = *(wchar_t **)(unaff_EBP + -0x18);
    pwStack_9c = *(wchar_t **)(unaff_EBP + -0x14);
    iVar2 = *(int *)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*piVar4 + 0x80))();
    if (iVar3 < 0) {
      uStack_c8 = 0x732d09;
      iStack_c4 = iVar3;
      piStack_c0 = piVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_c0 = (int *)0x732d16;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_c0 = (int *)0x732d21;
      FUN_00878dfb();
    }
    piStack_c0 = (int *)0x732d2d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    piStack_c0 = (int *)(unaff_EBP + -0x20);
    iStack_c4 = 0x732d3c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_c0 = (int *)0x732d48;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_c0 = (int *)0x732d52;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_c0 = (int *)(unaff_EBP + -0x48);
    iStack_c4 = 0x732d5c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_c0 = (int *)0x732d68;
      FUN_00878dfb();
    }
    piStack_c0 = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + -0x28) + 0x5cc;
    iStack_c4 = 0x732d85;
    iStack_c4 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c8;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    *(int *)(unaff_EBP + -0x10) = iVar2 + 10;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_c0 = (int *)0x732dc0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_c0 = (int *)0x732dcb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_c0 = (int *)0x732dd8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_c0 = (int *)0x732de3;
      FUN_00878dfb();
    }
    piStack_c0 = (int *)0xff;
    iStack_c4 = 0x732df2;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (piVar4 == (int *)0x0) {
      piStack_c0 = (int *)0x732e07;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 0x14);
    }
    iVar3 = *piVar4;
    uStack_c8 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
    piStack_c0 = *(int **)(unaff_EBP + -0x18);
    iVar2 = *(int *)(unaff_EBP + 8);
    *(int **)(unaff_EBP + -0x28) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_e8 = 0x732e45;
      iStack_e4 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e0 = 0x732e52;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_e0 = 0x732e5d;
      FUN_00878dfb();
    }
    iStack_e0 = 0x732e69;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_e0 = unaff_EBP + -0x48;
    iStack_e4 = 0x732e73;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_e0 = 0x732e7f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_e0 = 0x732e89;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iStack_e0 = unaff_EBP + -0x20;
    iStack_e4 = 0x732e93;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_e0 = 0x732e9f;
      FUN_00878dfb();
    }
    iStack_e0 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_e4 = 0x732eb3;
    iStack_e4 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_e8;
    FUN_004033a1(&DAT_00964ed0);
    uVar5 = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_004115d9(uVar5);
    iVar3 = FUN_0040e48b();
    iVar2 = iVar3 + 4 + iVar2;
    FUN_004115d9(iVar2);
    FUN_00448e3a(iVar2,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_e0 = 0x732efb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_e0 = 0x732f06;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e0 = 0x732f13;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_e0 = 0x732f1e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_e0 = 0x732f2f;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      iStack_e0 = 0x732f40;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      iStack_e0 = 0x732f51;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      iStack_e0 = 0x732f6e;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
      iStack_e0 = 0x732f7f;
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


