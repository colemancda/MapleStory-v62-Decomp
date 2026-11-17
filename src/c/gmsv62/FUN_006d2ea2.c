/* FUN_006d2ea2 - 0x006d2ea2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d2ea2(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  wchar_t *pwStack_48;
  wchar_t *pwStack_44;
  undefined4 *puStack_40;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(extraout_ECX + 0x78) + -4);
    }
    if ((uint)(iVar7 - *(int *)(extraout_ECX + 0x68)) <= *(uint *)(iVar3 + 0x38)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      goto LAB_006d2ee9;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
LAB_006d2ee9:
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (iVar3 == -1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0xb;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(unaff_EBP + -0x10) = 6;
  }
  else {
    *(uint *)(unaff_EBP + -0x10) = ((iVar3 == 2) - 1 & 0xfffffff4) + 0xd;
  }
  puStack_40 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  pwStack_44 = 
  L"䖍僄譑觌౥硨陚였ﱅ\xe801їￓ侍왼ﱅ\xe801柶ￗ좋廨흟觿\xe045䖍僄嶈\xe8fcﱗￒ쌻絙倆蓨ᩞ栀ڐ\x98䶍\xe8c4ȍￓ䖍僄䖋\xf7ecᯘ\xf7c0⏐\xe045\xf0b9"
  ;
  FUN_00403191();
  puStack_40 = (undefined4 *)(unaff_EBP + -0x3c);
  *(wchar_t ***)(unaff_EBP + 0xc) = &pwStack_44;
  pwStack_48 = u__00965a78;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pwStack_48 = 
  L"좋廨흟觿\xe045䖍僄嶈\xe8fcﱗￒ쌻絙倆蓨ᩞ栀ڐ\x98䶍\xe8c4ȍￓ䖍僄䖋\xf7ecᯘ\xf7c0⏐\xe045\xf0b9"
  ;
  FUN_0044974c();
  pwStack_48 = (wchar_t *)0x6d2f5d;
  uVar2 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  puStack_40 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_44 = L"쌻絙倆蓨ᩞ栀ڐ\x98䶍\xe8c4ȍￓ䖍僄䖋\xf7ecᯘ\xf7c0⏐\xe045\xf0b9";
  puStack_40 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_40 < 0) {
    pwStack_44 = (wchar_t *)0x6d2f77;
    FUN_00878dfb();
  }
  while( true ) {
    puStack_40 = &DAT_00980690;
    pwStack_44 = L"䖍僄䖋\xf7ecᯘ\xf7c0⏐\xe045\xf0b9";
    FUN_00403191();
    puStack_40 = (undefined4 *)(unaff_EBP + -0x3c);
    pwStack_44 = (wchar_t *)
                 (0xf0 - (~-(uint)(*(int *)(unaff_EBP + -0x14) != 0) & *(uint *)(unaff_EBP + -0x20))
                 );
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pwStack_48 = (wchar_t *)0x6d2fa8;
    uVar2 = FUN_00411641();
    *(wchar_t ***)(unaff_EBP + 0xc) = &pwStack_48;
    FUN_004033a1(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0044974c();
    uVar2 = FUN_004707e6();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    puStack_40 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    pwStack_44 = (wchar_t *)0x6d2fd6;
    puStack_40 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_40 < 0) {
      pwStack_44 = L"ｪ侍\xe878⽪";
      FUN_00878dfb();
    }
    puStack_40 = (undefined4 *)0xffffffff;
    pwStack_44 = (wchar_t *)0x6d2feb;
    iVar3 = FUN_006d5f55();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_40 = (undefined4 *)0xffffffff;
      pwStack_44 = u__00965a78;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      pwStack_48 = (wchar_t *)0x6d3004;
      FUN_004184ca();
      puStack_40 = *(undefined4 **)(unaff_EBP + -0x18);
      pwStack_44 = (wchar_t *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      pwStack_48 = (wchar_t *)0x6d3017;
      piVar4 = (int *)FUN_0046fcad();
      pwStack_44 = (wchar_t *)*piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (pwStack_44 == (wchar_t *)0x0) {
        puStack_40 = (undefined4 *)0x0;
      }
      else {
        puStack_40 = (undefined4 *)(*(uint *)(pwStack_44 + -2) >> 1);
      }
      pwStack_48 = (wchar_t *)0x6d3034;
      FUN_0046febf();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_40 = (undefined4 *)0x6d3040;
      FUN_00402676();
      puStack_40 = (undefined4 *)0xffffffff;
      pwStack_44 = *(wchar_t **)(unaff_EBP + 0xc);
      pwStack_48 = (wchar_t *)0x6d304c;
      FUN_004184ca();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      puStack_40 = *(undefined4 **)(unaff_EBP + -0x18);
      pwStack_44 = (wchar_t *)(unaff_EBP + -0x28);
      pwStack_48 = (wchar_t *)0x6d3063;
      puVar5 = (undefined4 *)FUN_0046fcad();
      pwStack_44 = (wchar_t *)*puVar5;
      puStack_40 = (undefined4 *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      pwStack_48 = (wchar_t *)0x6d3073;
      FUN_004184ca();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    puStack_40 = (undefined4 *)0x6d307e;
    FUN_00402676();
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + -4);
    }
    if (iVar3 == *(int *)(extraout_ECX + 0x68)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(int *)(unaff_EBP + 8) + -4) >> 1;
    }
    puStack_40 = (undefined4 *)(uVar6 - *(int *)(unaff_EBP + -0x18));
    pwStack_44 = (wchar_t *)(unaff_EBP + -0x2c);
    pwStack_48 = 
    L"赐ࡍ䗆ࣼ쟨푠诿ࡅ쌻ॴ㥦琘㌄\xebf6樃币䶍裔ﱝ跨틵㯿痳㤑\xec5d萏ﺁ\xffff嶉\xe9ecﹹ\xffff辋´"
    ;
    puStack_40 = (undefined4 *)FUN_005c1cfb();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    pwStack_44 = 
    L"䖋㬈瓃昉ᠹѴ\xf633ϫŪ赞푍嶈\xe8fc\xf58dￒ\xf33bᅵ崹࿬膄\xfffe觿\xec5d秩\xfffe诿뒏"
    ;
    FUN_00419192();
    if ((*(short **)(unaff_EBP + 8) == (short *)0x0) || (**(short **)(unaff_EBP + 8) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_40 = (undefined4 *)0x6d30e9;
    FUN_00402676();
    if (bVar1) break;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  if (*(int *)(extraout_ECX + 0xb4) != 0) {
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + -4);
    }
    puStack_40 = (undefined4 *)((iVar3 - *(int *)(extraout_ECX + 0x68)) + 1);
    pwStack_44 = L"崹瓤謖뒏";
    FUN_004ad003();
    if ((*(int *)(unaff_EBP + -0x1c) != 0) && (1 < *(int *)(*(int *)(extraout_ECX + 0xb4) + 0x3c)))
    {
      puStack_40 = (undefined4 *)(*(int *)(*(int *)(extraout_ECX + 0xb4) + 0x3c) + -1);
      pwStack_44 = L"譓\xe8cfギ\x14䶃￼䶍\xe808\xf527ￒ䶋忴摞ඉ";
      FUN_004acfe9();
    }
  }
  puStack_40 = (undefined4 *)0x0;
  pwStack_44 = L"䶃￼䶍\xe808\xf527ￒ䶋忴摞ඉ";
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_40 = (undefined4 *)0x6d314f;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


