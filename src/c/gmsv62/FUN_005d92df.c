/* FUN_005d92df - 0x005d92df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


wchar_t * FUN_005d92df(void)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  short *psVar9;
  undefined *puVar10;
  wchar_t *pwVar11;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  int *extraout_ECX_15;
  int *extraout_ECX_16;
  int *extraout_ECX_17;
  int *extraout_ECX_18;
  int *extraout_ECX_19;
  int *extraout_ECX_20;
  int *extraout_ECX_21;
  int *extraout_ECX_22;
  int *extraout_ECX_23;
  int *extraout_ECX_24;
  int *extraout_ECX_25;
  int *extraout_ECX_26;
  int extraout_ECX_27;
  int *extraout_ECX_28;
  int *extraout_ECX_29;
  int *extraout_ECX_30;
  int *extraout_ECX_31;
  int *extraout_ECX_32;
  wchar_t *extraout_ECX_33;
  int *extraout_ECX_34;
  int *extraout_ECX_35;
  int *extraout_ECX_36;
  int *extraout_ECX_37;
  int *extraout_ECX_38;
  int *extraout_ECX_39;
  int *extraout_ECX_40;
  int *extraout_ECX_41;
  wchar_t *extraout_ECX_42;
  wchar_t *pwVar12;
  int *extraout_ECX_43;
  int *piVar13;
  int *extraout_ECX_44;
  int *extraout_ECX_45;
  int unaff_EBP;
  bool bVar14;
  float10 fVar15;
  undefined1 *puStack_13c;
  int *piStack_138;
  wchar_t *pwStack_134;
  int *local_130;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  _local_130 = 0;
  puStack_13c = (undefined1 *)&pwStack_134;
  *(wchar_t ***)(unaff_EBP + -0x3c) = &pwStack_134;
  piStack_138 = (int *)0x3b4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e();
  piStack_138 = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_13c = (undefined1 *)0x5d9326;
  FUN_0040263d();
  puStack_13c = (undefined1 *)0x5d932d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pwStack_134 = 
  L"쌻䖉覔\xf05dᵴ䖍傔䶍\xe8f0럢￢쌻ൽȽ@璀倆鳨⧺贀碅\xffff僿䗆Ӽ哨\xe298㯿姃ٽ\xe850嬨)䖋贌졍䖉\xe8c8鉄￣䶍웨ﱅ褅\xec5d⿨=謀\xec45䶋贈౐䗆ۼ\xf88b㻨\xedf9诿ࡍ䞉謔\xec45傍謤\xe8f8狼￭䞉謬\xec45傍㌘诉\xe8f8酪￭襑⁇쒋斉棄ε"
  ;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x6c) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar5 != 0) {
    _local_130 = CONCAT44(unaff_EBP + -0x6c,0x5d934e);
    iVar5 = FUN_00404b30();
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      _local_130 = CONCAT44(iVar5,0x5d935f);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  _local_130 = CONCAT44(unaff_EBP + -0x88,0x5d936f);
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    _local_130 = CONCAT44(iVar5,0x5d937a);
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0xc);
  _local_130 = CONCAT44(0x5d9388,local_130);
  FUN_004125cc();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  _local_130 = CONCAT44(0x5d9397,local_130);
  FUN_005dd0c6();
  iVar5 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  _local_130 = CONCAT44(0x5d93ab,local_130);
  uVar6 = FUN_004b8ce9();
  *(undefined4 *)(iVar5 + 0x14) = uVar6;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  _local_130 = CONCAT44(0x5d93be,local_130);
  uVar6 = FUN_004b8ce9();
  *(undefined4 *)(iVar5 + 0x2c) = uVar6;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  _local_130 = CONCAT44(0x5d93d0,local_130);
  uVar6 = FUN_004b8ce9();
  pwStack_134 = (wchar_t *)&stack0xfffffed4;
  *(undefined4 *)(iVar5 + 0x20) = uVar6;
  *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
  local_130 = (int *)0x3b5;
  piStack_138 = (int *)0x5d93e6;
  pwVar11 = (wchar_t *)extraout_ECX;
  FUN_00679e4e();
  _local_130 = CONCAT44(pwVar11,unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pwStack_134 = 
  L"좋ꓨ\xe2b4替붃ｘ\xffff예ﱅ༈꺅\x01褀챝䥨\x06贀\xe445譐웎ﱅ\xe809ढ़\n뗿｠\xffff\x8b赐책왐ﱅ\xe80aꄍ￣䖋菤ೄ쌻䗆ৼੴ삃僴⻨\xe29f姿뗿｠\xffff綋\xe8ecඣ*譙跈ᡗ䶉\xe8e4\xf876￭䶋觤⁇䖋跬⑐\xf88b揨\xedf8觿ⱇ邿順圀趍ｈ\xffff\xf7e8\xe29c埿趍Ｈ\xffff䗆௼\xe7e8\xe29c叿赓䢅\xffff僿薍Ｈ\xffff赐챍䗆೼篨\xe381凿첋斉僄쿨\xe29e跿ꡅ왐ﱅ\xe80c씾￢좋竨\xe291诿\xe8c8딕￢좋䗆໼볨\xe29d㯿觃\xe445嶉瓠贝\xe445赐\xe04d⋨\xe2b6㯿緃㴍䀂耀ٴ\xe850\xf8dc)䖍储䗆ዼ韨\xe296㯿姃ٽ\xe850\xf8c4)薍Ｈ\xffff왐ﱅ\xe811陼￢쌻絙倆ꧨ⧸贀䢅\xffff僿䗆ჼ懨\xe296㯿姃ٽ\xe850\xf88e)崹痠账\xe04d燨\xe292诿책쌻䗆ࣼ萏Ḇ"
  ;
  FUN_0040263d();
  pwStack_134 = L"荦墽\xffffࣿ䗆ࣼ蔏Ʈ";
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  local_130 = extraout_ECX_00;
  if (*(short *)(unaff_EBP + -0xa8) == 8) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    _local_130 = CONCAT44(0x649,unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    pwStack_134 = 
    L"뗿｠\xffff\x8b赐책왐ﱅ\xe80aꄍ￣䖋菤ೄ쌻䗆ৼੴ삃僴⻨\xe29f姿뗿｠\xffff綋\xe8ecඣ*譙跈ᡗ䶉\xe8e4\xf876￭䶋觤⁇䖋跬⑐\xf88b揨\xedf8觿ⱇ邿順圀趍ｈ\xffff\xf7e8\xe29c埿趍Ｈ\xffff䗆௼\xe7e8\xe29c叿赓䢅\xffff僿薍Ｈ\xffff赐챍䗆೼篨\xe381凿첋斉僄쿨\xe29e跿ꡅ왐ﱅ\xe80c씾￢좋竨\xe291诿\xe8c8딕￢좋䗆໼볨\xe29d㯿觃\xe445嶉瓠贝\xe445赐\xe04d⋨\xe2b6㯿緃㴍䀂耀ٴ\xe850\xf8dc)䖍储䗆ዼ韨\xe296㯿姃ٽ\xe850\xf8c4)薍Ｈ\xffff왐ﱅ\xe811陼￢쌻絙倆ꧨ⧸贀䢅\xffff僿䗆ჼ懨\xe296㯿姃ٽ\xe850\xf88e)崹痠账\xe04d燨\xe292诿책쌻䗆ࣼ萏Ḇ"
    ;
    puVar7 = (undefined4 *)FUN_00679d86();
    _local_130 = CONCAT44(*(undefined4 *)(unaff_EBP + -0xa0),*puVar7);
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_138 = (int *)0x5d943f;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      _local_130 = CONCAT44(*(int *)(unaff_EBP + -0x1c) + -0xc,0x5d9456);
      FUN_00403384();
    }
    iVar5 = *(int *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(*(undefined4 *)(unaff_EBP + -0xa0),0x5d9465);
    uVar6 = FUN_0087a208();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    _local_130 = CONCAT44(0x5d9473,local_130);
    uVar6 = FUN_004b8ce9();
    *(undefined4 *)(iVar5 + 0x20) = uVar6;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9486,local_130);
    uVar6 = FUN_004b8ce9();
    *(undefined4 *)(iVar5 + 0x2c) = uVar6;
    _local_130 = 0x980690005d949a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    _local_130 = 0x980690005d94aa;
    FUN_00403191();
    _local_130 = 0;
    pwStack_134 = (wchar_t *)(unaff_EBP + -0xb8);
    piStack_138 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_13c = (undefined1 *)0x5d94c6;
    uVar6 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_13c;
    puStack_13c = extraout_ECX_01;
    FUN_004033a1(uVar6);
    iVar5 = unaff_EBP + -0x58;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    pwStack_134 = (wchar_t *)0x5d94f8;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar5 != 0) {
      _local_130 = CONCAT44(unaff_EBP + -0x1c,0x5d950e);
      iVar5 = FUN_00404b30();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        _local_130 = CONCAT44(iVar5,0x5d951f);
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    _local_130 = CONCAT44(unaff_EBP + -0x58,0x5d952c);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9537);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    _local_130 = CONCAT44(unaff_EBP + -0xd8,0x5d9547);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9552);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    _local_130 = CONCAT44(unaff_EBP + -0xb8,0x5d9562);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d956d);
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      _local_130 = CONCAT44(*(IBinding **)(unaff_EBP + -0x20),0x5d95a3);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                 *(IBinding **)(unaff_EBP + -0x20));
      _local_130 = CONCAT44(0x5d95ab,local_130);
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      local_130 = extraout_ECX_02;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        pwVar11 = (wchar_t *)(*(int *)(unaff_EBP + -0x34) + -0xc);
        local_130 = (int *)0x5d95bf;
        FUN_00403384();
        local_130 = (int *)pwVar11;
      }
      goto LAB_005d95c0;
    }
    _local_130 = CONCAT44(0x5d957a,local_130);
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      _local_130 = CONCAT44(*(int *)(unaff_EBP + -0x34) + -0xc,0x5d9592);
      FUN_00403384();
    }
LAB_005db38f:
    *(undefined1 *)(unaff_EBP + -4) = 6;
    _local_130 = CONCAT44(unaff_EBP + -0xa8,0x5db39f);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5db3aa);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    _local_130 = CONCAT44(0x5db3b6,local_130);
    FUN_005dd0ee();
    _local_130 = CONCAT44(0x5db3be,local_130);
    FUN_004027eb();
    _local_130 = CONCAT44(0x5db3c6,local_130);
    FUN_004027eb();
    _local_130 = CONCAT44(0x5db3ce,local_130);
    FUN_004027eb();
  }
  else {
LAB_005d95c0:
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = u_mbookID_00965b34;
    piStack_138 = (int *)0x5d95d2;
    FUN_004033a1();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_138 = (int *)0x5d95e2;
    FUN_0040263d();
    piStack_138 = (int *)0x5d95e9;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    pwStack_134 = 
    L"䖉跤ꡅ왐ﱅ\xe808闀￢쒃㬌緃倆\xebe8⧷㤀\xe45d捴兓첋斉埄翨\xe29d跿ꡅ赐\xf04d䗆ࣼ௨\xe290诿\xe8c8뉫￢왐ﱅ\xe816輍￣奙䶍觨\xe445໨:謀\xe44d\xf88b垍\xe824\xf68c￭䞉贬ꡅ왐ﱅ\xe808镖￢쌻絙倆菨⧷謀ࡅ䖉古䖍뿤钀\x97譐\xe8cf㭣"
    ;
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_138 = (int *)0x5d9603;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9610);
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + -0x3c) = &local_130;
      pwStack_134 = u_mbookID_00965b34;
      piStack_138 = (int *)0x5d9622;
      FUN_004033a1();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_138 = (int *)0x5d9632;
      FUN_0040263d();
      piStack_138 = (int *)0x5d9639;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      pwStack_134 = 
      L"奙䶍觨\xe445໨:謀\xe44d\xf88b垍\xe824\xf68c￭䞉贬ꡅ왐ﱅ\xe808镖￢쌻絙倆菨⧷謀ࡅ䖉古䖍뿤钀\x97譐\xe8cf㭣"
      ;
      uVar6 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      _local_130 = CONCAT44(0x5d9650,local_130);
      iVar5 = FUN_005dd05e();
      _local_130 = CONCAT44(0x5d965d,local_130);
      uVar6 = FUN_004b8ce9();
      *(undefined4 *)(iVar5 + 0x2c) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      _local_130 = CONCAT44(unaff_EBP + -0x58,0x5d966d);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5d9678);
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
    _local_130 = (ulonglong)(unaff_EBP - 0x1c);
    pwStack_134 = L"삅蔏᳸";
    iVar5 = FUN_005dd1f2();
    if (iVar5 != 0) goto LAB_005db38f;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
    _local_130 = CONCAT44(unaff_EBP + -0x18,unaff_EBP + -0x1c);
    pwStack_134 = 
    L"譑规쑥๨\r倀캋迨ਇ贀\xe885\xfffe僿䶍웈ﱅ\xe808轫￢좋쯨\xe2b1诿\xec4d쀳㥦\xe89d\xfffe凿锏觀쑥䗆᣼膉ǔ"
    ;
    FUN_005dd246();
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    local_130 = (int *)0xd0e;
    piStack_138 = (int *)0x5d96bf;
    pwVar11 = (wchar_t *)extraout_ECX_03;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    pwStack_134 = L"좋쯨\xe2b1诿\xec4d쀳㥦\xe89d\xfffe凿锏觀쑥䗆᣼膉ǔ";
    FUN_0040263d();
    pwStack_134 = L"䶋㏬曀鴹ﻨ\xffffད삕斉웄ﱅ褘풁\x01謀棄Б";
    FUN_004048a4();
    pwVar11 = *(wchar_t **)(unaff_EBP + -0x14);
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    *(uint *)((int)pwVar11 + 0x1d4) = (uint)(*(short *)(unaff_EBP + -0x118) != 0);
    local_130 = (int *)0x411;
    piStack_138 = (int *)0x5d9705;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    pwStack_134 = L"좋藨\xe2b1凿쒋斉棄ϯ";
    FUN_0040263d();
    pwStack_134 = 
    L"譑规쑥\xef68\x03倀캋䗆᫼ᣨਇ贀ࢅ\xffff僿䶍웈ﱅ\xe81a軴￢좋哨\xe2b1凿쒋斉棄В"
    ;
    FUN_004048a4();
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    local_130 = (int *)0x3ef;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_138 = (int *)0x5d9736;
    pwVar11 = (wchar_t *)extraout_ECX_04;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0xf8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    pwStack_134 = L"좋哨\xe2b1凿쒋斉棄В";
    FUN_0040263d();
    pwStack_134 = (wchar_t *)0x5d9750;
    FUN_004048a4();
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    local_130 = (int *)0x412;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_138 = (int *)0x5d9767;
    pwVar11 = (wchar_t *)extraout_ECX_05;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    pwStack_134 = (wchar_t *)0x5d977a;
    FUN_0040263d();
    pwStack_134 = 
    L"䗆Ỽ줳㥦\xf89d\xfffe࿿솕쀳㥦࢝\xffff࿿삕\xf88b쀳㥦ᢝ\xffff࿿삕쌻౴䖋诬跸䁐ͪ⛫쬻ᑴכּ萏᭜"
    ;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    bVar14 = *(short *)(unaff_EBP + -0xf8) == 0;
    if (*(short *)(unaff_EBP + -0xe8) == 0) {
      if (*(short *)(unaff_EBP + -0x108) != 0) {
        if (bVar14) {
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          _local_130 = CONCAT44(unaff_EBP + -0xe8,0x5db333);
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            _local_130 = CONCAT44(iVar5,0x5db33e);
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          _local_130 = CONCAT44(unaff_EBP + -0xf8,0x5db34e);
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            _local_130 = CONCAT44(iVar5,0x5db359);
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          _local_130 = CONCAT44(unaff_EBP + -0x108,0x5db369);
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            _local_130 = CONCAT44(iVar5,0x5db374);
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          _local_130 = CONCAT44(unaff_EBP + -0x118,0x5db384);
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            _local_130 = CONCAT44(iVar5,0x5db38f);
            FUN_00878dfb();
          }
          goto LAB_005db38f;
        }
        iVar5 = *(int *)(unaff_EBP + -0x14);
        goto LAB_005d97e1;
      }
      iVar5 = *(int *)(unaff_EBP + -0x14);
      if (!bVar14) goto LAB_005d97e1;
    }
    else {
      iVar5 = *(int *)(unaff_EBP + -0x14);
LAB_005d97e1:
      _local_130 = _local_130 & 0xffffffff;
    }
    _local_130 = CONCAT44(0x5d97eb,local_130);
    uVar6 = FUN_004133b5();
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined4 *)(iVar5 + 0x48) = uVar6;
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    local_130 = (int *)0x41c;
    piStack_138 = (int *)0x5d9801;
    pwVar11 = (wchar_t *)extraout_ECX_06;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0x128);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    pwStack_134 = (wchar_t *)0x5d9814;
    FUN_0040263d();
    pwStack_134 = (wchar_t *)0x5d981b;
    FUN_004048a4();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    _local_130 = CONCAT44(0x5d9838,local_130);
    uVar6 = FUN_0055a766();
    *(undefined4 *)(iVar5 + 0x54) = uVar6;
    _local_130 = CONCAT44((VARIANTARG *)(unaff_EBP + -200),0x5d9848);
    VariantInit((VARIANTARG *)(unaff_EBP + -200));
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)&DAT_0097812c;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = (wchar_t *)0x64d;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_13c = (undefined1 *)0x5d9864;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9874;
    FUN_0040263d();
    piStack_138 = (int *)0x5d987b;
    local_130 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    pwStack_134 = (wchar_t *)0x5d9885;
    local_130 = (int *)FUN_004343c5();
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
    pwStack_134 = (wchar_t *)0x5d9893;
    FUN_00402e8e();
    _local_130 = CONCAT44(pwVar11,0x5d9898);
    FUN_00483476();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d98a8,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x3c) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d98b8;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d98c3);
      FUN_00878dfb();
      local_130 = extraout_ECX_07;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = (wchar_t *)0x64e;
    puStack_13c = (undefined1 *)0x5d98d7;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d98e7;
    FUN_0040263d();
    piStack_138 = (int *)0x5d98ee;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df㝔";
    FUN_00412550();
    _local_130 = CONCAT44(0x5d990a,local_130);
    uVar6 = FUN_005dd05e();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    _local_130 = CONCAT44(0x5d9917,local_130);
    uVar6 = FUN_0055a766();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x60) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d992a;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9935);
      FUN_00878dfb();
      local_130 = extraout_ECX_08;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = (wchar_t *)0x64f;
    puStack_13c = (undefined1 *)0x5d9949;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9959;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9960;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df㛢";
    FUN_00412550();
    _local_130 = CONCAT44(0x5d997c,local_130);
    uVar6 = FUN_005dd05e();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    _local_130 = CONCAT44(0x5d9989,local_130);
    uVar6 = FUN_0055a766();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x6c) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d999c;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d99a7);
      FUN_00878dfb();
      local_130 = extraout_ECX_09;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = (wchar_t *)0x650;
    puStack_13c = (undefined1 *)0x5d99bb;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d99cb;
    FUN_0040263d();
    piStack_138 = (int *)0x5d99d2;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df㙰";
    iVar5 = FUN_00412550();
    _local_130 = CONCAT44(0x5d99ee,local_130);
    iVar8 = FUN_005dd05e();
    *(uint *)(iVar8 + 0x1f8) = (uint)(iVar5 != 0);
    pwVar11 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9a01;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9a0c);
      FUN_00878dfb();
      local_130 = extraout_ECX_10;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + -0x3c) = &local_130;
    pwStack_134 = (wchar_t *)0x651;
    puStack_13c = (undefined1 *)0x5d9a20;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9a30;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9a37;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df㘋";
    iVar5 = FUN_00412550();
    _local_130 = CONCAT44(0x5d9a53,local_130);
    iVar8 = FUN_005dd05e();
    *(uint *)(iVar8 + 0x1fc) = (uint)(iVar5 != 0);
    pwVar11 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9a66;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9a71);
      FUN_00878dfb();
      local_130 = extraout_ECX_11;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1fc) == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      _local_130 = CONCAT44(0x8a2,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      pwStack_134 = (wchar_t *)0x5d9a97;
      puVar7 = (undefined4 *)FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      _local_130 = CONCAT44(*(undefined4 *)(unaff_EBP + 8),*puVar7);
      piStack_138 = (int *)(unaff_EBP + -0x20);
      pwStack_134 = u__s__d_00965b28;
      puStack_13c = (undefined1 *)0x5d9aae;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        _local_130 = CONCAT44(*(int *)(unaff_EBP + -0x1c) + -0xc,0x5d9ac5);
        FUN_00403384();
      }
      _local_130 = 0x980690005d9ad7;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      _local_130 = 0x980690005d9ae7;
      FUN_00403191();
      _local_130 = 0;
      pwStack_134 = (wchar_t *)(unaff_EBP + -0xd8);
      piStack_138 = (int *)(unaff_EBP + -0xb8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puStack_13c = (undefined1 *)0x5d9b03;
      uVar6 = FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_13c;
      FUN_004033a1(uVar6);
      iVar5 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_00405a1d(iVar5);
      FUN_00402660();
      FUN_00404a02(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      pwStack_134 = 
      L"쌻䖉褈챝ᵴ䖍倈䶍\xe8cc꿥￢쌻ൽȽ@璀倆鿨⧲贀ꡅ왐ﱅ\xe835遚￢쌻絙倆蟨⧲贀䢅\xffff僿䗆㓼㿨\xe290㯿姃ٽ\xe850\xf26c)薍Ｈ\xffff왐ﱅ\xe833逤￢쌻絙倆凨⧲儀쒋斉棄ً"
      ;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 8) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (iVar5 != 0) {
        _local_130 = CONCAT44(unaff_EBP + 8,0x5d9b4b);
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          _local_130 = CONCAT44(iVar5,0x5d9b5c);
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      _local_130 = CONCAT44(unaff_EBP + -0x58,0x5d9b69);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5d9b74);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      _local_130 = CONCAT44(unaff_EBP + -0xb8,0x5d9b84);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5d9b8f);
        FUN_00878dfb();
      }
      pwVar11 = (wchar_t *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      local_130 = (int *)0x5d9b9f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5d9baa);
        FUN_00878dfb();
        pwVar11 = (wchar_t *)extraout_ECX_12;
      }
      pwStack_134 = (wchar_t *)&stack0xfffffed4;
      *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffed4;
      local_130 = (int *)0x64b;
      piStack_138 = (int *)0x5d9bbd;
      FUN_00679e4e();
      _local_130 = CONCAT44(pwVar11,unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      pwStack_134 = 
      L"좋탨\xe2ac替㢃예ﱅ男謅ࡀ׫Ⲹ鞁謀\xec4dｪ솃倰诨\xe7a4跿큅왐ﱅ\xe833迀￢쌻絙倆\xede8⧱贀챍헨\xe28b跿\xe04d䗆⇼哨\xe28a櫿儁쒋斉栈ْ"
      ;
      FUN_0040263d();
      pwStack_134 = 
      L"荦࠸䗆㟼յ䂋\xeb08렅脬\x97䶋櫬菿チ\xe850ꒋ￧䖍僐䗆㏼샨\xe28f㯿姃ٽ\xe850\xf1ed)䶍\xe8cc试￢䶍웠ﱅ\xe821詔￢Ū譑规ࡥ剨\x06倀캋៨ਂ贀큅赐\xf04d䗆⇼\xf6e8\xe289诿\xe8c8걖￢왐ﱅ\xe839裸￣奙䶍觨ࡅ裡3謀ࡍ\xf88b垍\xe870靃￣䞉赸큅왐ﱅ\xe821轁￢쌻絙倆滨⧱匀譑规ࡥ卨\x06倀캋귨ਁ贀큅赐\xf04d䗆⇼賨\xe289诿\xe8c8꯬￢왐ﱅ\xe83b袎￣奙䶍觨ࡅ迨3謀ࡍ\xf88b垍\xe87c雙￣螉\x84"
      ;
      psVar9 = (short *)FUN_004048a4();
      sVar2 = *psVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (sVar2 == 8) {
        puVar10 = *(undefined **)(psVar9 + 4);
      }
      else {
        puVar10 = &DAT_0097812c;
      }
      _local_130 = CONCAT44(0xffffffff,puVar10);
      pwStack_134 = 
      L"䖍僐䗆㏼샨\xe28f㯿姃ٽ\xe850\xf1ed)䶍\xe8cc试￢䶍웠ﱅ\xe821詔￢Ū譑规ࡥ剨\x06倀캋៨ਂ贀큅赐\xf04d䗆⇼\xf6e8\xe289诿\xe8c8걖￢왐ﱅ\xe839裸￣奙䶍觨ࡅ裡3謀ࡍ\xf88b垍\xe870靃￣䞉赸큅왐ﱅ\xe821轁￢쌻絙倆滨⧱匀譑规ࡥ卨\x06倀캋귨ਁ贀큅赐\xf04d䗆⇼賨\xe289诿\xe8c8꯬￢왐ﱅ\xe83b袎￣奙䶍觨ࡅ迨3謀ࡍ\xf88b垍\xe87c雙￣螉\x84"
      ;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      _local_130 = CONCAT44(unaff_EBP + -0x30,0x5d9c03);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5d9c0e);
        FUN_00878dfb();
      }
      _local_130 = CONCAT44(0x5d9c16,local_130);
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      _local_130 = CONCAT44(0x5d9c22,local_130);
      FUN_00402676();
      local_130 = extraout_ECX_13;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x1;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x652;
    puStack_13c = (undefined1 *)0x5d9c37;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9c47;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9c4e;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    pwStack_134 = 
    L"奙䶍觨ࡅ裡3謀ࡍ\xf88b垍\xe870靃￣䞉赸큅왐ﱅ\xe821轁￢쌻絙倆滨⧱匀譑规ࡥ卨\x06倀캋귨ਁ贀큅赐\xf04d䗆⇼賨\xe289诿\xe8c8꯬￢왐ﱅ\xe83b袎￣奙䶍觨ࡅ迨3謀ࡍ\xf88b垍\xe87c雙￣螉\x84"
    ;
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5d9c65,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5d9c72,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x78) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9c82;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9c8d);
      FUN_00878dfb();
      local_130 = extraout_ECX_14;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x653;
    puStack_13c = (undefined1 *)0x5d9ca1;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9cb1;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9cb8;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    pwStack_134 = L"奙䶍觨ࡅ迨3謀ࡍ\xf88b垍\xe87c雙￣螉\x84";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5d9ccf,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5d9cdc,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x84) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9cef;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9cfa);
      FUN_00878dfb();
      local_130 = extraout_ECX_15;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x654;
    puStack_13c = (undefined1 *)0x5d9d0e;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9d1e;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9d25;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    pwStack_134 = L"奙䶍觨ࡅ⋨3謀ࡍ\xf88b鞍\x88";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5d9d3c,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5d9d4c,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x90) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9d5f;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9d6a);
      FUN_00878dfb();
      local_130 = extraout_ECX_16;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x655;
    puStack_13c = (undefined1 *)0x5d9d7e;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9d8e;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9d95;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    pwStack_134 = L"삃偤\xe853㗼";
    iVar5 = FUN_00412550();
    pwStack_134 = (wchar_t *)(iVar5 + 100);
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5d9da9;
    FUN_005dd3a5();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9dca,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x9c) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9de0;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9deb);
      FUN_00878dfb();
      local_130 = extraout_ECX_17;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x656;
    puStack_13c = (undefined1 *)0x5d9dff;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9e0f;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9e16;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    pwStack_134 = L"삃偤\xe853㕻";
    iVar5 = FUN_00412550();
    pwStack_134 = (wchar_t *)(iVar5 + 100);
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5d9e2a;
    FUN_005dd3a5();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9e46,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xa8) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9e5c;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9e67);
      FUN_00878dfb();
      local_130 = extraout_ECX_18;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x657;
    puStack_13c = (undefined1 *)0x5d9e7b;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9e8b;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9e92;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    pwStack_134 = L"삃偤\xe853㓿";
    iVar5 = FUN_00412550();
    pwStack_134 = (wchar_t *)(iVar5 + 100);
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5d9ea6;
    FUN_005dd3a5();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9ec1,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0xb4) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9ed4;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9edf);
      FUN_00878dfb();
      local_130 = extraout_ECX_19;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x658;
    puStack_13c = (undefined1 *)0x5d9ef3;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9f03;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9f0a;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    pwStack_134 = L"卐諨4뼀ߏ";
    pwStack_134 = (wchar_t *)FUN_00412550();
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5d9f1b;
    FUN_005dd3a5();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9f3c,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xc0) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9f52;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9f5d);
      FUN_00878dfb();
      local_130 = extraout_ECX_20;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x659;
    puStack_13c = (undefined1 *)0x5d9f71;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9f81;
    FUN_0040263d();
    piStack_138 = (int *)0x5d9f88;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    pwStack_134 = L"卐೨4茀Ⴤ윻좋ɼ쾋䖋跬쒐";
    pwStack_134 = (wchar_t *)FUN_00412550();
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5d9f99;
    FUN_005dd3a5();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5d9fb5,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xcc) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5d9fcb;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5d9fd6);
      FUN_00878dfb();
      local_130 = extraout_ECX_21;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65a;
    puStack_13c = (undefined1 *)0x5d9fea;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5d9ffa;
    FUN_0040263d();
    piStack_138 = (int *)0x5da001;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    pwStack_134 = L"卐鏨3茀Ⴤ윻좋ɼ쾋䖋跬킐";
    pwStack_134 = (wchar_t *)FUN_00412550();
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5da012;
    FUN_005dd3a5();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5da02e,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xd8) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da044;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da04f);
      FUN_00878dfb();
      local_130 = extraout_ECX_22;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65b;
    puStack_13c = (undefined1 *)0x5da063;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5da073;
    FUN_0040263d();
    piStack_138 = (int *)0x5da07a;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    pwStack_134 = (wchar_t *)0x5da084;
    pwStack_134 = (wchar_t *)FUN_00412550();
    piStack_138 = (int *)0x0;
    puStack_13c = (undefined1 *)0x5da08b;
    FUN_005dd3a5();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    _local_130 = CONCAT44(0x5da0a6,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0xe4) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da0b9;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da0c4);
      FUN_00878dfb();
      local_130 = extraout_ECX_23;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65c;
    puStack_13c = (undefined1 *)0x5da0d8;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5da0e8;
    FUN_0040263d();
    piStack_138 = (int *)0x5da0ef;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    pwStack_134 = L"奙䶍觨ࡅ壨/謀ࡍ\xf88b鞍è";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5da106,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5da116,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0xf0) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da129;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da134);
      FUN_00878dfb();
      local_130 = extraout_ECX_24;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65d;
    puStack_13c = (undefined1 *)0x5da148;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5da158;
    FUN_0040263d();
    piStack_138 = (int *)0x5da15f;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    pwStack_134 = L"奙䶍觨ࡅ\xe8e8.謀ࡍ\xf88b鞍ô";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5da176,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5da186,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0xfc) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da199;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da1a4);
      FUN_00878dfb();
      local_130 = extraout_ECX_25;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x0;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65e;
    puStack_13c = (undefined1 *)0x5da1b8;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5da1c8;
    FUN_0040263d();
    piStack_138 = (int *)0x5da1cf;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    pwStack_134 = L"奙䶍觨ࡅ磨.謀ࡍ\xf88b鞍Ā";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5da1e6,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5da1f6,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x108) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da209;
    iVar5 = FUN_00402bc3();
    local_130 = (int *)pwVar11;
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da214);
      FUN_00878dfb();
      local_130 = extraout_ECX_26;
    }
    piStack_138 = (int *)&local_130;
    pwVar11 = (wchar_t *)0x1;
    *(int ***)(unaff_EBP + 8) = &local_130;
    pwStack_134 = (wchar_t *)0x65f;
    puStack_13c = (undefined1 *)0x5da229;
    FUN_00679e4e();
    pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_138 = (int *)0x5da239;
    FUN_0040263d();
    piStack_138 = (int *)0x5da240;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(pwVar11,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    pwStack_134 = L"奙䶍觨ࡅߨ.謀ࡍ\xf88b鞍Č";
    uVar6 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    _local_130 = CONCAT44(0x5da257,local_130);
    iVar5 = FUN_005dd05e();
    _local_130 = CONCAT44(0x5da267,local_130);
    uVar6 = FUN_004133b5();
    *(undefined4 *)(iVar5 + 0x114) = uVar6;
    pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    local_130 = (int *)0x5da27a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da285);
      FUN_00878dfb();
      pwVar11 = (wchar_t *)extraout_ECX_27;
    }
    pwStack_134 = (wchar_t *)&stack0xfffffed4;
    *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffed4;
    local_130 = (int *)0x660;
    piStack_138 = (int *)0x5da298;
    FUN_00679e4e();
    _local_130 = CONCAT44(pwVar11,unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    pwStack_134 = 
    L"좋\xf5e8\xe2a5僿薍Ｘ\xffff왐ﱅ\xe855譲￢쌻奙ٽ\xe850\xeb2f)䖍僐䗆⇼\xeae8\xe288㯿姃ٽ\xe850\xeb17)荦㢽\xffffࣿ薋｀\xffffմⲸ鞁謀\xec4d솁Ę"
    ;
    FUN_0040263d();
    pwStack_134 = 
    L"赐㢅\xffff僿䗆嗼狨\xe28b㯿姃絙倆⿨⧫贀큅왐ﱅ\xe821裪￢쌻絙倆៨⧫昀붃Ｘ\xffff謈䂅\xffff瓿렅脬\x97䶋臬ᣁ\x01儀\xe850ნ"
    ;
    uVar6 = FUN_004048a4();
    _local_130 = CONCAT44(uVar6,unaff_EBP + -200);
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    pwStack_134 = 
    L"쌻奙ٽ\xe850\xeb2f)䖍僐䗆⇼\xeae8\xe288㯿姃ٽ\xe850\xeb17)荦㢽\xffffࣿ薋｀\xffffմⲸ鞁謀\xec4d솁Ę"
    ;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da2cc);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    _local_130 = CONCAT44(unaff_EBP + -0x30,0x5da2d9);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da2e4);
      FUN_00878dfb();
    }
    local_130 = *(int **)(unaff_EBP + -0xc0);
    if (*(short *)(unaff_EBP + -200) != 8) {
      local_130 = (int *)&DAT_0097812c;
    }
    pwVar11 = (wchar_t *)(*(int *)(unaff_EBP + -0x14) + 0x118);
    pwStack_134 = L"삅奙蔏č";
    iVar5 = FUN_005db3e5();
    local_130 = (int *)pwVar11;
    if (iVar5 != 0) {
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x661;
      puStack_13c = (undefined1 *)0x5da434;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da444;
      FUN_0040263d();
      piStack_138 = (int *)0x5da44b;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      pwStack_134 = L"奙䶍诨\xe8f8⯽";
      uVar6 = FUN_00412550();
      _local_130 = CONCAT44(0x5da461,local_130);
      iVar5 = FUN_005dd05e();
      *(undefined4 *)(iVar5 + 0x138) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da474;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da47f);
        FUN_00878dfb();
        local_130 = extraout_ECX_28;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x662;
      puStack_13c = (undefined1 *)0x5da493;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da4a3;
      FUN_0040263d();
      piStack_138 = (int *)0x5da4aa;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      pwStack_134 = L"奙䶍诨\xe8f8⮞";
      uVar6 = FUN_00412550();
      _local_130 = CONCAT44(0x5da4c0,local_130);
      iVar5 = FUN_005dd05e();
      *(undefined4 *)(iVar5 + 0x13c) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da4d3;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da4de);
        FUN_00878dfb();
        local_130 = extraout_ECX_29;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x483;
      puStack_13c = (undefined1 *)0x5da4f2;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da502;
      FUN_0040263d();
      piStack_138 = (int *)0x5da509;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⬹";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da525,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da535,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x148) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da54b;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da556);
        FUN_00878dfb();
        local_130 = extraout_ECX_30;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x665;
      puStack_13c = (undefined1 *)0x5da56a;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da57a;
      FUN_0040263d();
      piStack_138 = (int *)0x5da581;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⫁";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da59d,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da5ad,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x178) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da5c3;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da5ce);
        FUN_00878dfb();
        local_130 = extraout_ECX_31;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x666;
      puStack_13c = (undefined1 *)0x5da5e2;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da5f2;
      FUN_0040263d();
      piStack_138 = (int *)0x5da5f9;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⩉";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da615,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da625,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x184) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da63b;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da646);
        FUN_00878dfb();
        local_130 = extraout_ECX_32;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xb0b;
      puStack_13c = (undefined1 *)0x5da65a;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da66a;
      FUN_0040263d();
      piStack_138 = (int *)0x5da671;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⧑";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da68d,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da69d,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x160) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da6b3;
      iVar5 = FUN_00402bc3();
      pwVar12 = pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da6be);
        FUN_00878dfb();
        pwVar12 = extraout_ECX_33;
      }
      _local_130 = 0x3ff0000000000000;
      puStack_13c = (undefined1 *)&pwStack_134;
      *(wchar_t ***)(unaff_EBP + 8) = &pwStack_134;
      piStack_138 = (int *)0x667;
      pwStack_134 = pwVar12;
      FUN_00679e4e();
      piStack_138 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_13c = (undefined1 *)0x5da6e8;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x5da6ef;
      pwStack_134 = (wchar_t *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 99;
      piStack_138 = (int *)0x5da6f9;
      fVar15 = (float10)FUN_00434352();
      *(double *)(unaff_EBP + -0x40) = (double)fVar15;
      _local_130 = CONCAT44(0x5da707,local_130);
      iVar5 = FUN_005dd05e();
      *(undefined8 *)(iVar5 + 0x150) = *(undefined8 *)(unaff_EBP + -0x40);
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da71d;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da728);
        FUN_00878dfb();
        local_130 = extraout_ECX_34;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xb0c;
      puStack_13c = (undefined1 *)0x5da73c;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da74c;
      FUN_0040263d();
      piStack_138 = (int *)0x5da753;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x65;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⣯";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da76f,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da77f,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 400) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da795;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da7a0);
        FUN_00878dfb();
        local_130 = extraout_ECX_35;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xb61;
      puStack_13c = (undefined1 *)0x5da7b4;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da7c4;
      FUN_0040263d();
      piStack_138 = (int *)0x5da7cb;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x67;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⡷";
      iVar5 = FUN_00412550();
      _local_130 = CONCAT44(0x5da7e7,local_130);
      iVar8 = FUN_005dd05e();
      *(uint *)(iVar8 + 0x194) = (uint)(iVar5 != 0);
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da7fa;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da805);
        FUN_00878dfb();
        local_130 = extraout_ECX_36;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xc7d;
      puStack_13c = (undefined1 *)0x5da819;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da829;
      FUN_0040263d();
      piStack_138 = (int *)0x5da830;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x69;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df⠒";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da84c,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da85c,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1a0) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da872;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da87d);
        FUN_00878dfb();
        local_130 = extraout_ECX_37;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0x663;
      puStack_13c = (undefined1 *)0x5da891;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da8a1;
      FUN_0040263d();
      piStack_138 = (int *)0x5da8a8;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df➚";
      FUN_00412550();
      _local_130 = CONCAT44(0x5da8c4,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da8d4,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1b8) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da8ea;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da8f5);
        FUN_00878dfb();
        local_130 = extraout_ECX_38;
      }
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = u_hpTagColor_00965b10;
      piStack_138 = (int *)0x5da906;
      FUN_004033a1();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da916;
      FUN_0040263d();
      piStack_138 = (int *)0x5da91d;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x6d;
      pwStack_134 = L"奙䶍觨ࡅ⫨\'謀ࡍ\xf88b鞍Ƽ";
      uVar6 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da934,local_130);
      iVar5 = FUN_005dd05e();
      _local_130 = CONCAT44(0x5da944,local_130);
      uVar6 = FUN_004133b5();
      *(undefined4 *)(iVar5 + 0x1c4) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da957;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da962);
        FUN_00878dfb();
        local_130 = extraout_ECX_39;
      }
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = u_hpTagBgcolor_00965af4;
      piStack_138 = (int *)0x5da973;
      FUN_004033a1();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da983;
      FUN_0040263d();
      piStack_138 = (int *)0x5da98a;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x6f;
      pwStack_134 = L"奙䶍觨ࡅ뷨&謀ࡍ\xf88b鞍ǈ";
      uVar6 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5da9a1,local_130);
      iVar5 = FUN_005dd05e();
      _local_130 = CONCAT44(0x5da9b1,local_130);
      uVar6 = FUN_004133b5();
      *(undefined4 *)(iVar5 + 0x1d0) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5da9c4;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5da9cf);
        FUN_00878dfb();
        local_130 = extraout_ECX_40;
      }
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = u_fixedDamage_00965adc;
      piStack_138 = (int *)0x5da9e0;
      FUN_004033a1();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5da9f0;
      FUN_0040263d();
      piStack_138 = (int *)0x5da9f7;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      pwStack_134 = L"奙䶍觨ࡅ僨&謀ࡍ\xf88b鞍Ƥ";
      uVar6 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5daa0e,local_130);
      iVar5 = FUN_005dd05e();
      _local_130 = CONCAT44(0x5daa1e,local_130);
      uVar6 = FUN_004133b5();
      *(undefined4 *)(iVar5 + 0x1ac) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5daa31;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5daa3c);
        FUN_00878dfb();
        local_130 = extraout_ECX_41;
      }
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = u_onlyNormalAttack_00965ab8;
      piStack_138 = (int *)0x5daa4d;
      FUN_004033a1();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_138 = (int *)0x5daa5d;
      FUN_0040263d();
      piStack_138 = (int *)0x5daa64;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8df◞";
      FUN_00412550();
      _local_130 = CONCAT44(0x5daa80,local_130);
      uVar6 = FUN_005dd05e();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(0x5daa90,local_130);
      uVar6 = FUN_0055a766();
      *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x254) = uVar6;
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      local_130 = (int *)0x5daaa6;
      iVar5 = FUN_00402bc3();
      pwVar12 = pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5daab1);
        FUN_00878dfb();
        pwVar12 = extraout_ECX_42;
      }
      _local_130 = 0;
      puStack_13c = (undefined1 *)&pwStack_134;
      *(wchar_t ***)(unaff_EBP + 8) = &pwStack_134;
      piStack_138 = (int *)0xb0b;
      pwStack_134 = pwVar12;
      FUN_00679e4e();
      piStack_138 = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_13c = (undefined1 *)0x5daad6;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x5daadd;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x75;
      pwStack_134 = 
      L"쌻䖉觤ꁝᵴ䖍僤䶍\xe8a0ꀲ￢쌻ൽȽ@璀倆\xece8⧢贀큅왐ﱅ\xe877肧￢쌻絙倆퓨⧢㤀ꁝ萏\x95"
      ;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x60) = 0;
      if (iVar5 != 0) {
        _local_130 = CONCAT44(unaff_EBP + -0x1c,0x5daafe);
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          _local_130 = CONCAT44(iVar5,0x5dab0f);
          FUN_00878dfb();
        }
      }
      pwVar11 = (wchar_t *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x77;
      local_130 = (int *)0x5dab1c;
      iVar5 = FUN_00402bc3();
      piVar13 = (int *)pwVar11;
      if (iVar5 < 0) {
        local_130 = (int *)0x5dab27;
        FUN_00878dfb();
        piVar13 = extraout_ECX_43;
      }
      if (*(int *)(unaff_EBP + -0x60) == 0) {
        iVar5 = *(int *)(unaff_EBP + -0x14);
        _local_130 = CONCAT44(0x5dabd7,local_130);
        uVar6 = FUN_0055a766();
        *(undefined4 *)(iVar5 + 0x160) = uVar6;
      }
      else {
        piStack_138 = (int *)&local_130;
        pwVar11 = (wchar_t *)0x0;
        *(int ***)(unaff_EBP + 8) = &local_130;
        pwStack_134 = (wchar_t *)0x43e;
        puStack_13c = (undefined1 *)0x5dab44;
        local_130 = piVar13;
        FUN_00679e4e();
        pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        piStack_138 = (int *)0x5dab54;
        FUN_0040263d();
        piStack_138 = (int *)0x5dab5b;
        uVar6 = FUN_004048a4();
        _local_130 = CONCAT44(pwVar11,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        pwStack_134 = L"\xf88b䖍储䗆矼俨\xe280菿ೄ쌻ٽ\xe850\xe27a)䖋㏬㯉࿻솕邍Ř";
        FUN_00412550();
        pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        piStack_138 = (int *)0x5dab74;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _local_130 = CONCAT44(iVar5,0x5dab81);
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
        _local_130 = CONCAT44(0x5dab99,local_130);
        uVar6 = FUN_0055a766();
        *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x160) = uVar6;
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
        _local_130 = CONCAT44(0x5dabba,local_130);
        uVar6 = FUN_0055a766();
        *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x16c) = uVar6;
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 500) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1f0) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1ec) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1e8) = 0;
      _local_130 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x98),0x5dac0e);
      VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
      *(undefined1 *)(unaff_EBP + -4) = 0x7a;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        _local_130 = 0x80004003005dac21;
        FUN_00878dfb();
      }
      _local_130 = CONCAT44(unaff_EBP + -0x6c,0x5dac2d);
      uVar6 = FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x7b;
      _local_130 = CONCAT44(uVar6,0x5dac3a);
      FUN_004035f5();
      piVar13 = *(int **)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x7d;
      if (piVar13 != (int *)0x0) {
        _local_130 = CONCAT44(piVar13,0x5dac4b);
        (**(code **)(*piVar13 + 8))();
      }
      *(undefined4 *)(unaff_EBP + -0x68) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          _local_130 = 0x80004003005dac62;
          FUN_00878dfb();
        }
        piStack_138 = *(int **)(unaff_EBP + -0x48);
        _local_130 = CONCAT44(unaff_EBP + -0x68,unaff_EBP + -0x98);
        pwStack_134 = (wchar_t *)0x1;
        puStack_13c = (undefined1 *)0x5dac78;
        iVar5 = (**(code **)(*piStack_138 + 0xc))();
        if (iVar5 != 0) break;
        _local_130 = CONCAT44(unaff_EBP + -0x98,unaff_EBP + -0x20);
        pwStack_134 = 
        L"奙穨\x04贀책譐웎ﱅ\xe87e\xf0e0\t䶋㯠诋琀謄\xeb09㌂櫉倆\xe851ᘨ*쒃\xf70c᫘ﻀ跀챍䖈\xe80b禤￢崸琋謉\xec45胿Ǩ"
        ;
        FUN_00405a23();
        _local_130 = CONCAT44(0x47a,unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        pwStack_134 = 
        L"䶋㯠诋琀謄\xeb09㌂櫉倆\xe851ᘨ*쒃\xf70c᫘ﻀ跀챍䖈\xe80b禤￢崸琋謉\xec45胿Ǩ"
        ;
        puVar7 = (undefined4 *)FUN_00679d86();
        if (*(undefined4 **)(unaff_EBP + -0x20) == (undefined4 *)0x0) {
          pwStack_134 = (wchar_t *)0x0;
        }
        else {
          pwStack_134 = (wchar_t *)**(undefined4 **)(unaff_EBP + -0x20);
        }
        _local_130 = CONCAT44(6,*puVar7);
        piStack_138 = (int *)0x5dacbe;
        iVar5 = FUN_0087c2e6();
        *(char *)(unaff_EBP + 0xb) = '\x01' - (iVar5 != 0);
        _local_130 = CONCAT44(0x5dacd2,local_130);
        FUN_00402676();
        if (*(char *)(unaff_EBP + 0xb) != '\0') {
          piVar13 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
          *piVar13 = *piVar13 + 1;
        }
        _local_130 = CONCAT44(0x85c,unaff_EBP + -0x74);
        pwStack_134 = 
        L"䶋㯠诋琀謄\xeb09㌂櫉倅\xe851ᗢ*쒃\xf70c᫘ﻀ跀豍䖈\xe80b神￢崸琋謎\xec45胿Ǭ"
        ;
        puVar7 = (undefined4 *)FUN_00679d86();
        if (*(int **)(unaff_EBP + -0x20) == (int *)0x0) {
          pwStack_134 = (wchar_t *)0x0;
        }
        else {
          pwStack_134 = (wchar_t *)**(int **)(unaff_EBP + -0x20);
        }
        _local_130 = CONCAT44(5,*puVar7);
        piStack_138 = (int *)0x5dad04;
        iVar5 = FUN_0087c2e6();
        *(char *)(unaff_EBP + 0xb) = '\x01' - (iVar5 != 0);
        _local_130 = CONCAT44(0x5dad18,local_130);
        FUN_00402676();
        if (*(char *)(unaff_EBP + 0xb) == '\0') {
          _local_130 = CONCAT44(0x430,unaff_EBP + -0x44);
          pwStack_134 = 
          L"䶋㯠诋琀謄\xeb09㌂櫉倃\xe851ᖓ*쒃\xf70c᫘ﻀ跀뱍䖈\xe80b礏￢崸琋謋\xec45胿Ǵ"
          ;
          puVar7 = (undefined4 *)FUN_00679d86();
          if (*(int **)(unaff_EBP + -0x20) == (int *)0x0) {
            pwStack_134 = (wchar_t *)0x0;
          }
          else {
            pwStack_134 = (wchar_t *)**(int **)(unaff_EBP + -0x20);
          }
          _local_130 = CONCAT44(3,*puVar7);
          piStack_138 = (int *)0x5dad53;
          iVar5 = FUN_0087c2e6();
          *(char *)(unaff_EBP + 0xb) = '\x01' - (iVar5 != 0);
          _local_130 = CONCAT44(0x5dad67,local_130);
          FUN_00402676();
          if (*(char *)(unaff_EBP + 0xb) == '\0') {
            _local_130 = CONCAT44(0x3d8,unaff_EBP + -0x3c);
            pwStack_134 = 
            L"䶋㯠诋琀謄\xeb09㌂櫉倃\xe851ᕇ*쒃\xf70c᫘ﻀ跀쑍䖈\xe80b磃￢崸琋謉\xec45胿ǰ"
            ;
            puVar7 = (undefined4 *)FUN_00679d86();
            if (*(int **)(unaff_EBP + -0x20) == (int *)0x0) {
              pwStack_134 = (wchar_t *)0x0;
            }
            else {
              pwStack_134 = (wchar_t *)**(int **)(unaff_EBP + -0x20);
            }
            _local_130 = CONCAT44(3,*puVar7);
            piStack_138 = (int *)0x5dad9f;
            iVar5 = FUN_0087c2e6();
            *(char *)(unaff_EBP + 0xb) = '\x01' - (iVar5 != 0);
            _local_130 = CONCAT44(0x5dadb3,local_130);
            FUN_00402676();
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              piVar13 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
              *piVar13 = *piVar13 + 1;
            }
          }
          else {
            piVar13 = (int *)(*(int *)(unaff_EBP + -0x14) + 500);
            *piVar13 = *piVar13 + 1;
          }
        }
        else {
          piVar13 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1ec);
          *piVar13 = *piVar13 + 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          _local_130 = CONCAT44(0x5dadd1,local_130);
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        _local_130 = CONCAT44(unaff_EBP + -0x98,0x5dade0);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _local_130 = CONCAT44(iVar5,0x5dadef);
          FUN_00878dfb();
        }
      }
      _local_130 = 0;
      puStack_13c = (undefined1 *)&pwStack_134;
      *(wchar_t ***)(unaff_EBP + 8) = &pwStack_134;
      piStack_138 = (int *)0x85c;
      FUN_00679e4e();
      piStack_138 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x7d;
      puStack_13c = (undefined1 *)0x5dae15;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x5dae1c;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      pwStack_134 = 
      L"쌻䖉规鱝ᵴ䖍僄䶍\xe89c鳳￢쌻ൽȽ@璀倆귨⧟贀ꡅ왐ﱅ\xe882絨￢쌻絙倆门⧟謀鱍쬻⡴譑规謈鱅쌻斉琈謆倈凿贄\xe84d䗆苼탨!謀\xe8c8ᨃ"
      ;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x3c) = iVar5;
      *(undefined4 *)(unaff_EBP + -100) = 0;
      if (iVar5 != 0) {
        _local_130 = CONCAT44(unaff_EBP + -0x3c,0x5dae3d);
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          _local_130 = CONCAT44(iVar5,0x5dae4e);
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      _local_130 = CONCAT44(unaff_EBP + -0x58,0x5dae5b);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5dae66);
        FUN_00878dfb();
      }
      uVar3 = *(uint *)(unaff_EBP + -100);
      local_130 = (int *)0x0;
      if (uVar3 != 0) {
        _local_130 = (ulonglong)uVar3 << 0x20;
        piVar13 = *(int **)(unaff_EBP + -100);
        *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffed4;
        if (piVar13 != (int *)0x0) {
          _local_130 = CONCAT44(uVar3,piVar13);
          pwStack_134 = L"䶍웨ﱅ\xe882⇐";
          (**(code **)(*piVar13 + 4))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x82;
        pwVar11 = (wchar_t *)(_local_130 >> 0x20);
        local_130 = (int *)0x5dae8e;
        FUN_005dd05e();
        _local_130 = CONCAT44(pwVar11,0x5dae95);
        FUN_005dc898();
        local_130 = extraout_ECX_44;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xe77;
      puStack_13c = (undefined1 *)0x5daea9;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      piStack_138 = (int *)0x5daebc;
      FUN_0040263d();
      piStack_138 = (int *)0x5daec3;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x85;
      pwStack_134 = L"\xf88b\xf759姟；䶍\xf7e8\xe8dfⅿ";
      iVar5 = FUN_00412550();
      _local_130 = CONCAT44(0x5daedf,local_130);
      iVar8 = FUN_005dd05e();
      *(uint *)(iVar8 + 0x1d8) = (uint)(iVar5 != 0);
      pwVar11 = (wchar_t *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      local_130 = (int *)0x5daef5;
      iVar5 = FUN_00402bc3();
      local_130 = (int *)pwVar11;
      if (iVar5 < 0) {
        _local_130 = CONCAT44(iVar5,0x5daf00);
        FUN_00878dfb();
        local_130 = extraout_ECX_45;
      }
      piStack_138 = (int *)&local_130;
      pwVar11 = (wchar_t *)0x0;
      *(int ***)(unaff_EBP + 8) = &local_130;
      pwStack_134 = (wchar_t *)0xe78;
      puStack_13c = (undefined1 *)0x5daf14;
      FUN_00679e4e();
      pwStack_134 = (wchar_t *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      piStack_138 = (int *)0x5daf27;
      FUN_0040263d();
      piStack_138 = (int *)0x5daf2e;
      uVar6 = FUN_004048a4();
      _local_130 = CONCAT44(pwVar11,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x87;
      pwStack_134 = L"奙䶍诨\xe8f8ℚ";
      uVar6 = FUN_00412550();
      _local_130 = CONCAT44(0x5daf44,local_130);
      iVar5 = FUN_005dd05e();
      *(undefined4 *)(iVar5 + 0x1dc) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      _local_130 = CONCAT44(0x5daf59,local_130);
      FUN_00404892();
      _local_130 = CONCAT44(0x5daf61,local_130);
      iVar5 = FUN_005dd05e();
      if (*(int *)(iVar5 + 0x1d8) != 0) {
        _local_130 = 0;
        puStack_13c = (undefined1 *)&pwStack_134;
        *(wchar_t ***)(unaff_EBP + 8) = &pwStack_134;
        piStack_138 = (int *)0x1062;
        FUN_00679e4e();
        piStack_138 = (int *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 0x82;
        puStack_13c = (undefined1 *)0x5daf95;
        FUN_0040263d();
        puStack_13c = (undefined1 *)0x5daf9c;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x89;
        pwStack_134 = L"䖉趼뱅赐챍\xede8\xe4a1跿碍\xffff웿ﱅ\xe88b飍￢䶍\xe8cc‼";
        uVar6 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x44) = uVar6;
        _local_130 = CONCAT44(unaff_EBP + -0x44,0x5dafb6);
        FUN_004251a3();
        *(undefined1 *)(unaff_EBP + -4) = 0x8b;
        _local_130 = CONCAT44(0x5dafc5,local_130);
        FUN_00404892();
        _local_130 = CONCAT44(0x5dafcd,local_130);
        cVar4 = FUN_005dd009();
        if (cVar4 != '\0') {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          while( true ) {
            _local_130 = CONCAT44(0x5dafe5,(int)_local_130);
            FUN_0087a1b0();
            pwVar11 = (wchar_t *)0x7fffffff;
            pwStack_134 = *(wchar_t **)(unaff_EBP + 8);
            piStack_138 = (int *)0x5daff1;
            local_130 = (int *)&stack0xfffffed8;
            pwStack_134 = (wchar_t *)FUN_00412335();
            *(int ***)(unaff_EBP + -0x74) = &local_130;
            piStack_138 = (int *)0x5daffd;
            FUN_004033a1();
            pwStack_134 = (wchar_t *)(unaff_EBP + -0xb8);
            *(undefined1 *)(unaff_EBP + -4) = 0x8b;
            piStack_138 = (int *)0x5db010;
            FUN_0040263d();
            piStack_138 = (int *)0x5db017;
            uVar6 = FUN_004048a4();
            _local_130 = CONCAT44(pwVar11,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x8d;
            pwStack_134 = 
            L"奙趍ｈ\xffff䖉웠ﱅ\xe88b顝￢紹瓠樠跿\xe045赐\xe84dᛨ 謀臈\xe0c1\x01\xe800Ί"
            ;
            uVar6 = FUN_00412550();
            *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x8b;
            _local_130 = CONCAT44(0x5db035,local_130);
            FUN_00404892();
            if (*(int *)(unaff_EBP + -0x20) == 0x7fffffff) break;
            _local_130 = CONCAT44(0xffffffff,unaff_EBP + -0x20);
            pwStack_134 = L"좋솁Ǡ";
            FUN_005dd05e();
            pwStack_134 = L"䗿\xeb08趃챍䗆苼쫨\xe275叿兓쒋斉梼ྲྀ";
            FUN_005dd030();
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x82;
        _local_130 = CONCAT44(0x5db066,local_130);
        FUN_00402630();
      }
      _local_130 = 0;
      puStack_13c = (undefined1 *)&pwStack_134;
      *(wchar_t ***)(unaff_EBP + -0x44) = &pwStack_134;
      piStack_138 = (int *)0xf76;
      FUN_00679e4e();
      piStack_138 = (int *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x82;
      puStack_13c = (undefined1 *)0x5db08e;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x5db095;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x8f;
      pwStack_134 = 
      L"䖉贈ࡅ赐遍\xf4e8\xe4a0跿碍\xffff웿ﱅ\xe891韔￢赓遍䫨\x1f萀瓀卂譑规쑥睨\x0f倀캋濨৭贀ꡅ赐遍䗆釼仨\xe275诿\xe8c8鞮￢䗇ƈ"
      ;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
      _local_130 = CONCAT44(unaff_EBP + 8,0x5db0af);
      FUN_004251a3();
      *(undefined1 *)(unaff_EBP + -4) = 0x91;
      _local_130 = CONCAT44(0x5db0be,local_130);
      FUN_00404892();
      _local_130 = 0x5db0c7;
      cVar4 = FUN_005dd011();
      if (cVar4 == '\0') {
        uVar6 = 0;
      }
      else {
        piStack_138 = (int *)&local_130;
        pwVar11 = (wchar_t *)0x0;
        *(int ***)(unaff_EBP + -0x3c) = &local_130;
        pwStack_134 = (wchar_t *)0xf77;
        puStack_13c = (undefined1 *)0x5db0df;
        FUN_00679e4e();
        pwStack_134 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x91;
        piStack_138 = (int *)0x5db0ef;
        FUN_0040263d();
        piStack_138 = (int *)0x5db0f6;
        uVar6 = FUN_004048a4();
        *(undefined4 *)(unaff_EBP + -0x78) = 1;
        _local_130 = CONCAT44(pwVar11,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x93;
        pwStack_134 = L"奙\xf88b˫Ｓ䶍\xe8e8὇";
        uVar6 = FUN_00412550();
      }
      _local_130 = CONCAT44(0x5db117,local_130);
      iVar5 = FUN_005dd05e();
      bVar1 = *(byte *)(unaff_EBP + -0x78);
      *(undefined4 *)(iVar5 + 0x1e4) = uVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0x91;
      if ((bVar1 & 1) != 0) {
        _local_130 = CONCAT44(0x5db132,local_130);
        FUN_00404892();
      }
      _local_130 = 0;
      puStack_13c = (undefined1 *)&pwStack_134;
      *(wchar_t ***)(unaff_EBP + -0x44) = &pwStack_134;
      piStack_138 = (int *)0x1063;
      FUN_00679e4e();
      piStack_138 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x91;
      puStack_13c = (undefined1 *)0x5db157;
      FUN_0040263d();
      puStack_13c = (undefined1 *)0x5db15e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x95;
      pwStack_134 = L"䖉跄쑅赐ꑍ⯨\xe4a0跿ꡍ䗆韼໨\xe297跿ꑍ編\x1e萀࿀쎄";
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar6;
      _local_130 = CONCAT44(unaff_EBP + -0x3c,0x5db178);
      FUN_004251a3();
      *(undefined1 *)(unaff_EBP + -4) = 0x97;
      _local_130 = CONCAT44(0x5db184,local_130);
      FUN_00404892();
      _local_130 = CONCAT44(0x5db18c,local_130);
      cVar4 = FUN_005dd009();
      if (cVar4 != '\0') {
        pwVar11 = (wchar_t *)(unaff_EBP + 8);
        local_130 = (int *)0x5db1a0;
        FUN_0040263d();
        _local_130 = CONCAT44(pwVar11,0x5db1a7);
        uVar6 = FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x98;
        _local_130 = CONCAT44(uVar6,0x5db1b4);
        FUN_005dd3b4();
        *(undefined1 *)(unaff_EBP + -4) = 0x97;
        _local_130 = CONCAT44(0x5db1c0,local_130);
        FUN_00402623();
        *(undefined4 *)(unaff_EBP + -0x68) = 0;
        while( true ) {
          _local_130 = CONCAT44(0x5db1cb,local_130);
          piStack_138 = (int *)FUN_005593b9();
          _local_130 = CONCAT44(unaff_EBP + -0x68,unaff_EBP + -0x98);
          pwStack_134 = (wchar_t *)0x1;
          puStack_13c = (undefined1 *)0x5db1de;
          iVar5 = (**(code **)(*piStack_138 + 0xc))();
          if (iVar5 != 0) break;
          pwVar11 = (wchar_t *)0x0;
          *(int ***)(unaff_EBP + -0x44) = &local_130;
          pwStack_134 = *(wchar_t **)(unaff_EBP + -0x90);
          piStack_138 = (int *)0x5db1f4;
          FUN_004033a1();
          pwStack_134 = (wchar_t *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 0x97;
          piStack_138 = (int *)0x5db207;
          FUN_0040263d();
          piStack_138 = (int *)0x5db20e;
          uVar6 = FUN_004048a4();
          _local_130 = CONCAT44(pwVar11,uVar6);
          *(undefined1 *)(unaff_EBP + -4) = 0x9a;
          pwStack_134 = L"奙趍ｸ\xffff䖉예ﱅ\xe897陦￢ｪ䖍倈䶍\xe8e8Ḥ";
          uVar6 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + 8) = uVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x97;
          _local_130 = CONCAT44(0x5db22c,local_130);
          FUN_00404892();
          _local_130 = CONCAT44(0xffffffff,unaff_EBP + 8);
          pwStack_134 = L"좋솁ɘ";
          FUN_005dd05e();
          pwStack_134 = 
          L"趍ｨ\xffff勨\xf759\xe9ffｬ\xffff䶍\xe8a4珑￢䶍\xe890珉￢䶍\xe89c珁￢䶍\xe8b8珜￢趍ｨ\xffff䗆矼೨\xe296跿ꁍꋨ\xe273跿㢍\xffff웿ﱅ\xe820闵￢趍ﻘ\xffff䗆Ỽ\xe6e8\xe295跿ᢍ\xffff웿ﱅ\xe81c闗￢趍（\xffff䗆᫼죨\xe295跿\xf88d\xfffe웿ﱅ\xe818閹￢趍ﻨ\xffff䗆ࣼꫨ\xe295跿墍\xffff웿ﱅ\xe806閛￢䶍웨ﱅ\xe805ᵅ"
          ;
          FUN_0046984e();
          _local_130 = CONCAT44(0x5db252,local_130);
          FUN_00550ba4();
        }
      }
      _local_130 = CONCAT44(0x5db25f,local_130);
      FUN_00402630();
      _local_130 = CONCAT44(0x5db267,local_130);
      FUN_00402630();
      _local_130 = CONCAT44(0x5db26f,local_130);
      FUN_00402630();
      _local_130 = CONCAT44(0x5db277,local_130);
      FUN_00402653();
      *(undefined1 *)(unaff_EBP + -4) = 0x77;
      _local_130 = CONCAT44(0x5db286,local_130);
      FUN_00404892();
      _local_130 = CONCAT44(0x5db28e,local_130);
      FUN_00402630();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      _local_130 = CONCAT44(0x5db29d,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      _local_130 = CONCAT44(0x5db2ac,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      _local_130 = CONCAT44(0x5db2bb,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      _local_130 = CONCAT44(0x5db2ca,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      _local_130 = CONCAT44(0x5db2d9,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      _local_130 = CONCAT44(0x5db2e8,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      _local_130 = CONCAT44(0x5db2f7,local_130);
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      _local_130 = CONCAT44(0x5db303,local_130);
      FUN_005dd048();
      _local_130 = CONCAT44(0x5db30b,local_130);
      FUN_00402630();
      _local_130 = CONCAT44(0x5db313,local_130);
      FUN_00402630();
      _local_130 = CONCAT44(0x5db31b,local_130);
      FUN_00402630();
      pwVar11 = (wchar_t *)0x1;
      goto LAB_005db3d0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    _local_130 = CONCAT44(unaff_EBP + -200,0x5da323);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da32e);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    _local_130 = CONCAT44(unaff_EBP + -0x128,0x5da33e);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da349);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    _local_130 = CONCAT44(unaff_EBP + -0xe8,0x5da359);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da364);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    _local_130 = CONCAT44(unaff_EBP + -0xf8,0x5da374);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da37f);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    _local_130 = CONCAT44(unaff_EBP + -0x108,0x5da38f);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da39a);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    _local_130 = CONCAT44(unaff_EBP + -0x118,0x5da3aa);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da3b5);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    _local_130 = CONCAT44(unaff_EBP + -0xa8,0x5da3c5);
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      _local_130 = CONCAT44(iVar5,0x5da3d0);
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      _local_130 = 0x5da3e2;
      FUN_005dd104();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    piVar13 = *(int **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar13 != (int *)0x0) {
      _local_130 = CONCAT44(piVar13,0x5da3f6);
      (**(code **)(*piVar13 + 8))();
    }
    piVar13 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar13 != (int *)0x0) {
      _local_130 = CONCAT44(piVar13,0x5da406);
      (**(code **)(*piVar13 + 8))();
    }
    piVar13 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar13 != (int *)0x0) {
      _local_130 = CONCAT44(piVar13,0x5da41b);
      (**(code **)(*piVar13 + 8))();
    }
  }
  pwVar11 = (wchar_t *)0x0;
LAB_005db3d0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return pwVar11;
}


