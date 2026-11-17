/* FUN_005c152d - 0x005c152d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c152d(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  piStack_44 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pwStack_48 = (wchar_t *)(unaff_EBP + -0x18);
  uStack_4c = 0x5c154f;
  FUN_007d4a9a();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    if (*(int *)(extraout_ECX + 0x80) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(extraout_ECX + 0x80) + -4);
    }
    if (iVar4 - (*(int *)(extraout_ECX + 0xbc) + -4) / 0x10 <= *(int *)(iVar2 + 0x38)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      goto LAB_005c1596;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
LAB_005c1596:
  while( true ) {
    piStack_44 = &DAT_00980690;
    pwStack_48 = L"䖍僀蚋¸";
    FUN_00403191();
    piStack_44 = (int *)(unaff_EBP + -0x40);
    pwStack_48 = (wchar_t *)(*(int *)(extraout_ECX + 0xb8) + -0xe);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_4c = 0x5c15c3;
    uVar1 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x28) = &uStack_4c;
    FUN_004033a1(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0044974c();
    iVar2 = FUN_0047077a();
    piStack_44 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    pwStack_48 = 
    L"삅絙倆￨⭷圀䖍僤䶍\xe808\xe6a4￪赐큍䗆׼糨\xe57b诿\xe445삅䗆˼ੴ삃僴嫨\xe41d姿䖋褌푅䖍僐ｪ쮋⟨\b謀\xe8c8ݥ"
    ;
    piStack_44 = (int *)FUN_00402bc3();
    if ((int)piStack_44 < 0) {
      pwStack_48 = 
      L"赗\xe445赐ࡍꓨ\xeae6僿䶍원ﱅ\xe805筼￥䖋藤움ﱅ琂茊\xf4c0\xe850ᵚ￤譙౅䖉跔큅橐诿\xe8cbࠧ"
      ;
      FUN_00878dfb();
    }
    pwStack_48 = (wchar_t *)(unaff_EBP + -0x1c);
    uStack_4c = 0x5c1609;
    piStack_44 = (int *)iVar2;
    piStack_44 = (int *)FUN_0046fcad();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_48 = L"䖋藤움ﱅ琂茊\xf4c0\xe850ᵚ￤譙౅䖉跔큅橐诿\xe8cbࠧ";
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      piStack_44 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      pwStack_48 = L"譙౅䖉跔큅橐诿\xe8cbࠧ";
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
    piStack_44 = (int *)(unaff_EBP + -0x30);
    pwStack_48 = (wchar_t *)0xffffffff;
    uStack_4c = 0x5c163e;
    FUN_005c1e65();
    pwStack_48 = (wchar_t *)0x5c1645;
    FUN_005c1daa();
    if (*(int *)(unaff_EBP + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*(int *)(unaff_EBP + 8) + -4) >> 1;
    }
    piStack_44 = (int *)(uVar3 - iVar2);
    pwStack_48 = (wchar_t *)(unaff_EBP + -0x20);
    uStack_4c = 0x5c1664;
    piStack_44 = (int *)FUN_005c1cfb();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    pwStack_48 = (wchar_t *)0x5c1671;
    FUN_00419192();
    iVar2 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      piStack_44 = (int *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      pwStack_48 = (wchar_t *)0x5c1687;
      FUN_00403384();
    }
    if ((*(short **)(unaff_EBP + 8) == (short *)0x0) || (**(short **)(unaff_EBP + 8) == 0)) break;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piStack_44 = (int *)0xffffffff;
      pwStack_48 = u__00965a78;
      uStack_4c = 0x5c16b0;
      FUN_004184ca();
      piStack_44 = (int *)(unaff_EBP + 8);
      pwStack_48 = (wchar_t *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_4c = 0x5c16c4;
      piStack_44 = (int *)FUN_0046fc68();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      pwStack_48 = 
      L"䖋藜움ﱅ琇茊\xf4c0\xe850Ჟ￤譙\xf045삅䗆˼萏ﺧ\xffff삃僴蛨\xe41c姿飩\xfffe诿㬃瓇脑ﱸϨ"
      ;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        piStack_44 = (int *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        pwStack_48 = L"譙\xf045삅䗆˼萏ﺧ\xffff삃僴蛨\xe41c姿飩\xfffe诿㬃瓇脑ﱸϨ";
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_44 = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        pwStack_48 = (wchar_t *)0x5c16fe;
        FUN_00403384();
      }
    }
  }
  piStack_44 = *(int **)(extraout_ECX + 0x80);
  if ((piStack_44 != (int *)0x0) && (1000 < *(uint *)((int)piStack_44 + -4))) {
    pwStack_48 = L"΋윻ʹ碋诼벆";
    FUN_005c1ef5();
  }
  iVar4 = *(int *)(extraout_ECX + 0x80);
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + -4);
  }
  piStack_44 = (int *)((iVar2 - (*(int *)(extraout_ECX + 0xbc) + -4) / 0x10) + 1);
  pwStack_48 = (wchar_t *)0x5c173f;
  FUN_004ad003();
  if ((*(int *)(unaff_EBP + -0x14) != 0) && (1 < *(int *)(*(int *)(extraout_ECX + 0x7c) + 0x3c))) {
    piStack_44 = (int *)(*(int *)(*(int *)(extraout_ECX + 0x7c) + 0x3c) + -1);
    pwStack_48 = 
    L"譓\xe8ce䪐%䶍원ﱅ\xe801༉￤䖋㯨裃ﱝٴࢋｐࡑ䶃￼䶍\xe808໭￤䶋忴摞ඉ";
    FUN_004acfe9();
  }
  piStack_44 = (int *)0x0;
  pwStack_48 = L"䶍원ﱅ\xe801༉￤䖋㯨裃ﱝٴࢋｐࡑ䶃￼䶍\xe808໭￤䶋忴摞ඉ";
  FUN_008161f1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_44 = (int *)0x5c176d;
  FUN_00402676();
  piStack_44 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_44 != (int *)0x0) {
    pwStack_48 = L"䶃￼䶍\xe808໭￤䶋忴摞ඉ";
    (**(code **)(*piStack_44 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_44 = (int *)0x5c1789;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


