/* FUN_00743a59 - 0x00743a59 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00743a59(void)

{
  int iVar1;
  wchar_t *pwVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  wchar_t *pwStack_4c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  pwStack_4c = *(wchar_t **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00470891();
  iVar1 = *(int *)(DAT_00978354 + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    pwStack_4c = (wchar_t *)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffb8;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pwStack_4c = 
    L"좋髨\xe555㯿痃贴\xf04d䗆˼귨쯫跿\xec4d䗆Ǽꇨ쯫⃿ﱝ䶍\xe8e8\xeb96ￋ䶃￼䶍\xe818ᱲￒᏩ\x03贀\xf045赐\xec4d门쵖叿赓\xec4d部M謀\xe8c8乆"
    ;
    FUN_00724127();
    pwStack_4c = 
    L"쌻㑵䶍웰ﱅ\xe802\xebadￋ䶍웬ﱅ\xe801\xeba1ￋ崠跼\xe84d雨쯫菿ﱍ跿ᡍ狨툜\xe9ff̓"
    ;
    iVar1 = FUN_00599053();
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0046575e();
      goto LAB_00743e04;
    }
  }
  pwStack_4c = L"卓䶍\xe8ec䶐";
  FUN_00419192();
  pwStack_4c = (wchar_t *)0x0;
  FUN_00748897();
  pwStack_4c = L"嶉謈\xec45쌻萏Ț";
  FUN_00748954();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while ((*(short **)(unaff_EBP + -0x14) != (short *)0x0 && (**(short **)(unaff_EBP + -0x14) != 0)))
  {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    pwStack_4c = L"疋茌໾䗆׼մﺃ甏茋ࡽ甁樅壚˫쀳蜫ஸ";
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (((*(int *)(unaff_EBP + 0xc) == 0xe) || (*(int *)(unaff_EBP + 0xc) == 0xf)) &&
       (*(int *)(unaff_EBP + 8) == 1)) {
      iVar1 = -0x26;
    }
    else {
      iVar1 = 0;
    }
    pwStack_4c = (wchar_t *)((iVar1 - *(int *)(extraout_ECX + 3000)) + 0x226);
    uStack_54 = FUN_00411641();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffb0;
    uStack_58 = 0x743b77;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_54 = 0x743b87;
    FUN_0044974c();
    uStack_54 = 0x743b8e;
    pwVar2 = (wchar_t *)FUN_0047077a();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pwStack_4c = (wchar_t *)0x743b9d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      pwStack_4c = 
      L"卖䖍僤䶍\xe8f0샚ￒ赐\xe84d䗆߼쿨쵕跿\xe44d䗆ϼ꟨쯪櫿囿䖍僠䶍\xe8f0삲ￒ赐\xf04d䗆ࣼ꟨쵕跿\xe04d䗆ϼ翨쯪叿䶍\xe8f0䵔"
      ;
      FUN_00878dfb();
    }
    pwStack_4c = (wchar_t *)0x0;
    uStack_54 = 0x743bb6;
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    pwStack_4c = 
    L"䶍웤ﱅ\xe803\xeaa7ￋｪ赖\xe045赐\xf04d단틀僿䶍웰ﱅ\xe808喧ￍ䶍웠ﱅ\xe803\xea7fￋ赓\xf04d哨M茀౽簇茆౽縌４\xf075䖍棰뛌\x96\xe850勞ￌ쒃謌౅\xe883琋䠮瑈䠣ᥴ瑈䠏瑈㌄\xebf6븡᪭ⱍ᫫¾ￆ\xebdd븓뿝쳿೫ﾾ쫧\xebb0븅\xffff냿㑪삹鞺\xe800\xed52ￋ䖉㯜瓃兓譑ᱍ쒋䢉謄᱅쌻斉瓘茊Ӏｐ䐕躂㌀菀ࡽ영ﱅ༊삞ｐᑵ䖍￨ၵｖ౵譑觌푥\xe850ܱￏ䶋웜ﱅ\xe809Ŗ"
    ;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402676();
    uStack_54 = 0x743bde;
    pwStack_4c = pwVar2;
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    pwStack_4c = 
    L"䶍웠ﱅ\xe803\xea7fￋ赓\xf04d哨M茀౽簇茆౽縌４\xf075䖍棰뛌\x96\xe850勞ￌ쒃謌౅\xe883琋䠮瑈䠣ᥴ瑈䠏瑈㌄\xebf6븡᪭ⱍ᫫¾ￆ\xebdd븓뿝쳿೫ﾾ쫧\xebb0븅\xffff냿㑪삹鞺\xe800\xed52ￋ䖉㯜瓃兓譑ᱍ쒋䢉謄᱅쌻斉瓘茊Ӏｐ䐕躂㌀菀ࡽ영ﱅ༊삞ｐᑵ䖍￨ၵｖ౵譑觌푥\xe850ܱￏ䶋웜ﱅ\xe809Ŗ"
    ;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402676();
    pwStack_4c = (wchar_t *)0x743c00;
    FUN_00748954();
    if ((*(int *)(unaff_EBP + 0xc) < 7) || (0xc < *(int *)(unaff_EBP + 0xc))) {
      pwStack_4c = u__s_0096b6cc;
      uStack_54 = 0x743c1d;
      FUN_0041354c();
    }
    iVar1 = *(int *)(unaff_EBP + 0xc);
    if (iVar1 == 0xb) {
      uVar4 = 0xb0ffffff;
    }
    else if (iVar1 == 0xd) {
      uVar4 = 0xb0cae7ff;
    }
    else if (iVar1 == 0xe) {
      uVar4 = 0xccffbfdd;
    }
    else if (iVar1 == 0xf) {
      uVar4 = 0xddffc600;
    }
    else if (iVar1 == 0x11) {
      uVar4 = 0x2c4d1aad;
    }
    else {
      uVar4 = 0;
    }
    pwStack_4c = 
    L"䖉㯜瓃兓譑ᱍ쒋䢉謄᱅쌻斉瓘茊Ӏｐ䐕躂㌀菀ࡽ영ﱅ༊삞ｐᑵ䖍￨ၵｖ౵譑觌푥\xe850ܱￏ䶋웜ﱅ\xe809Ŗ"
    ;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(unaff_EBP + 0x1c);
      *(wchar_t ***)(unaff_EBP + -0x28) = &pwStack_4c;
      if (*(int *)(unaff_EBP + 0x1c) != 0) {
        uStack_54 = 0x743c8c;
        InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 0x1c) + 4));
        uVar3 = extraout_ECX_00;
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_54 = *(undefined4 *)(unaff_EBP + 0x14);
      uStack_58 = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_64;
      uStack_64 = uVar3;
      uStack_5c = uVar4;
      FUN_004343e4(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar1 = FUN_00743e15();
    }
    *(int *)(unaff_EBP + -0x30) = iVar1;
    if (iVar1 != 0) {
      pwStack_4c = L"ｪ䒹鞾였ﱅ\xe80b仚";
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    pwStack_4c = L"䶍诌\xe8f0䭓";
    iVar1 = FUN_00748bbe();
    FUN_00748841();
    FUN_00748853();
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      pwStack_4c = L"疉跐\xf045赐\xec4d瓨쵔囿赖\xec4d濨K謀\xe8c8䰥";
      FUN_00748869();
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
    }
    pwStack_4c = L"噖䶍\xe8ec䭯";
    FUN_00419192();
    pwStack_4c = (wchar_t *)0x0;
    FUN_00748897();
    pwStack_4c = (wchar_t *)0x743d2f;
    FUN_00748954();
  }
  while (DAT_0097be44 != 0) {
    if (*(uint *)(DAT_0097be44 + -4) < 0x41) {
      if (DAT_0097be44 != 0) {
        iVar1 = *(int *)(DAT_0097be44 + -4);
        goto LAB_00743d5d;
      }
      break;
    }
    pwStack_4c = (wchar_t *)0x743d50;
    FUN_00748c4e();
  }
  iVar1 = 0;
LAB_00743d5d:
  if (((iVar1 - *(int *)(extraout_ECX + 0xc6c)) + 1 < 3) ||
     (*(int *)(*(int *)(extraout_ECX + 0xaa0) + 0x38) ==
      *(int *)(*(int *)(extraout_ECX + 0xaa0) + 0x3c) + -1)) {
LAB_00743d8f:
    pwStack_4c = L"㚋卋캋៫辋ઠ";
    FUN_004ad003();
  }
  else {
    iVar1 = (*DAT_0097b704)();
    if (5000 < (uint)(iVar1 - *(int *)(extraout_ECX + 0xbbc))) goto LAB_00743d8f;
    pwStack_4c = L"辋ઠ";
    FUN_004ad003();
  }
  pwStack_4c = 
  L"쾋埨\a贀\xf04d䗆˼黨쯨跿\xec4d䗆Ǽ鋨쯨胿ﱥ贀\xe84d蛨쯨菿ﱍ菿ᱽ琀樊贀ᡍ࿨큛诿\xf44d幟襤\r"
  ;
  FUN_004acfe9();
  FUN_00744523();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    pwStack_4c = L"䶋忴摞ඉ";
    FUN_00449913();
  }
LAB_00743e04:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


