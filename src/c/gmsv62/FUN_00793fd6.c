/* FUN_00793fd6 - 0x00793fd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00793fd6(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  int unaff_EBP;
  int iStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  int iStack_a0;
  char *pcStack_9c;
  wchar_t *pwStack_98;
  
  FUN_00879bb8();
  uVar5 = FUN_0042452b();
  switch(uVar5) {
  case 0:
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_98;
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0x79401b;
    FUN_00424e0a();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_ac = 0x79402e;
    FUN_00486ada();
    puStack_a8 = (undefined1 *)0x8ec;
    iStack_ac = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679d86();
    puStack_a8 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_ac = 0x794053;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      pwStack_98 = L"桙ڞ";
      FUN_00403384();
    }
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x6c);
    pcStack_9c = (char *)0x794085;
    puVar9 = (undefined4 *)FUN_00679d86();
    pwStack_98 = (wchar_t *)*puVar9;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    pcStack_9c = (char *)0x794096;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x6c) != 0) {
      pwStack_98 = L"卙캋ꗨ\x93\xe900આ";
      FUN_00403384();
    }
    pwStack_98 = (wchar_t *)0x7940b5;
    FUN_0079d45a();
    break;
  case 1:
    uVar11 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar11;
    uVar10 = FUN_0042452b();
    *(uint *)(unaff_EBP + 8) = uVar10 & 0xff;
    pwStack_98 = (wchar_t *)0x7940df;
    iVar12 = FUN_0064d61f();
    *(int *)(unaff_EBP + -0x10) = iVar12;
    if (iVar12 != 0) {
      pwStack_98 = (wchar_t *)0x7940f6;
      iVar12 = FUN_00653f4d();
      if (iVar12 != 0) {
        pwStack_98 = 
        L"\x8b좋삃\xf7f4ᯙ⏉㏈㧀႙\x01贀鱍锏觀\xe445뇨쟤㧿\xe45d⑴叨๬謀\xf04dｐࡵꧨ\xebfd叿亍橸襤ゆ\x05謀樁＆ၐ䖋㷨⑆\x14蔏Ţ"
        ;
        piVar7 = (int *)FUN_00486ada();
        *(uint *)(unaff_EBP + -0x1c) =
             (uint)(*(int *)((-(uint)(*piVar7 != 0) & *piVar7 - 0xcU) + 0x110) != 0);
        FUN_004125d9();
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          _rand();
          pwStack_98 = *(wchar_t **)(unaff_EBP + 8);
          pcStack_9c = (char *)0x79413e;
          uVar11 = FUN_00653ee7();
          pwStack_98 = (wchar_t *)0x64;
          *(undefined4 *)(extraout_ECX + 0x530) = uVar11;
          pcStack_9c = (char *)0x6;
          iStack_a0 = 0x794151;
          (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))();
        }
      }
      iVar12 = *(int *)(unaff_EBP + -0x18);
      if (iVar12 == 0x142446) {
        pwStack_98 = L"쾋䖉\xe808ι￉똏㯀࿃㚄\x01匀ｨ";
        uVar11 = FUN_0079b949();
        *(undefined4 *)(unaff_EBP + 8) = uVar11;
        cVar6 = FUN_0042452b();
        if (cVar6 == '\0') {
          pwStack_98 = 
          L"翩\b㴀᫩\x11⡴褽ኡ琀㴡⠩\x14ᩴｨ\xffff卿٪痿謈ￎ\xf075䛨￈\xe9ffࡐ";
          FUN_0079ba1a();
        }
        else {
          pwStack_98 = (wchar_t *)0xff;
          pcStack_9c = (char *)0x3;
          puStack_a4 = (undefined1 *)&iStack_a0;
          *(int **)(unaff_EBP + -0x14) = &iStack_a0;
          puStack_a8 = (undefined1 *)0x794194;
          FUN_0043f93c();
          puStack_a4 = (undefined1 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          *(int **)(unaff_EBP + -0x1c) = &iStack_ac;
          *(undefined4 *)(unaff_EBP + -4) = 5;
          FUN_00486ada(&iStack_ac);
          FUN_00790038(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00424e27();
          uVar11 = FUN_0043210d();
          uVar11 = FUN_004091f9(uVar11);
          puVar9 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x2c,uVar11);
          this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + 8) + 0x14)
          ;
          pwStack_98 = 
          L"䶍\xe8d4\xe405ￇ䶃￼䶍\xe8ac\xed9fￆ邿順圀趍ｰ\xffff秨웯埿䶍잀ﱅ\t";
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar9);
          FUN_00412600();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402fa6();
          pwStack_98 = L"赗聍䗇ৼ";
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -4) = 9;
          pwStack_98 = 
          L"ḹ䗆ૼੵͨ@\xe880䯁\x0eڋ\xec83謐跼炵\xffffꗿ讥ꔈ莥წﲋ疍ꖀꖥ\x206a襐ࡅﾥ႑\x01㬀緃栎㷸\x96痿倈鋨๋贀聅왐ﱅ\xe809\xe93fￆ쌻絙倆注๋茀ﱍ跿炅\xffff僿ⓨ웩㯿姃贏࢘"
          ;
          FUN_00403191();
          iVar12 = *(int *)this;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar12 == 0) {
            pwStack_98 = 
            L"ڋ\xec83謐跼炵\xffffꗿ讥ꔈ莥წﲋ疍ꖀꖥ\x206a襐ࡅﾥ႑\x01㬀緃栎㷸\x96痿倈鋨๋贀聅왐ﱅ\xe809\xe93fￆ쌻絙倆注๋茀ﱍ跿炅\xffff僿ⓨ웩㯿姃贏࢘"
            ;
            FUN_00878dfb();
          }
          piVar7 = *(int **)this;
          iStack_a0 = *(int *)(unaff_EBP + -0x90);
          pcStack_9c = *(char **)(unaff_EBP + -0x8c);
          iVar12 = *piVar7;
          pwStack_98 = *(wchar_t **)(unaff_EBP + -0x88);
          iStack_ac = *(int *)(unaff_EBP + -0x7c);
          puStack_a8 = *(undefined1 **)(unaff_EBP + -0x78);
          *(int **)(unaff_EBP + 8) = piVar7;
          puStack_a4 = *(undefined1 **)(unaff_EBP + -0x74);
          iVar12 = (**(code **)(iVar12 + 0x110))(piVar7,0x20,*(undefined4 *)(unaff_EBP + -0x80));
          if (iVar12 < 0) {
            FUN_00878e09(iVar12,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar12 = FUN_00402bc3(unaff_EBP + -0x80);
          if (iVar12 < 0) {
            FUN_00878dfb(iVar12);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar12 = FUN_00402bc3(unaff_EBP + -0x90);
          if (iVar12 < 0) {
            FUN_00878dfb(iVar12);
          }
        }
      }
      else {
        if (((iVar12 == 0x111ae9) || (iVar12 == 0x12a189)) || (iVar12 == 0x142829)) {
          uVar10 = FUN_0042452b();
          pwStack_98 = (wchar_t *)(uVar10 & 0xff);
        }
        else {
          pwStack_98 = (wchar_t *)0x0;
        }
        pcStack_9c = (char *)0x6;
        iStack_a0 = *(int *)(unaff_EBP + 8);
        puStack_a4 = *(undefined1 **)(unaff_EBP + -0x10);
        puStack_a8 = (undefined1 *)0x7942eb;
        FUN_00790b31();
      }
    }
    break;
  case 2:
    FUN_0042459a();
    FUN_0042452b();
    pwStack_98 = L"삅萏ࠗ";
    pwStack_98 = (wchar_t *)FUN_0064d61f();
    if (pwStack_98 != (wchar_t *)0x0) {
      pcStack_9c = (char *)0x794332;
      FUN_00792f80();
    }
    break;
  case 3:
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    uVar10 = FUN_0042452b();
    if ((uVar10 & 0xff) == 0) {
      pwStack_98 = 
      L"赐\xe84d䗆ᇼ鷨젊跿\xe04d䗆௼쇨젉凿쒋斉倈캋틨켥诿웏ﱅ\xe80b\x87￉\xe850३￉좋㇨즖诿\xe845쌻ᡴᠸᑴඋ锠\x97쬻ੴŪժ\xe850\xe637\xfff7䶃￼䶍\xe9e8ӛ"
      ;
      FUN_0045cdbc();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      pwStack_98 = (wchar_t *)0x7944ee;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00414ebb();
      pwStack_98 = (wchar_t *)&stack0xffffff6c;
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff6c;
      pcStack_9c = (char *)0x794508;
      FUN_00486ada();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pwStack_98 = 
      L"\xe850३￉좋㇨즖诿\xe845쌻ᡴᠸᑴඋ锠\x97쬻ੴŪժ\xe850\xe637\xfff7䶃￼䶍\xe9e8ӛ"
      ;
      pwStack_98 = (wchar_t *)FUN_0042459a();
      pcStack_9c = (char *)0x794519;
      FUN_00424e82();
      pcStack_9c = (char *)0x794520;
      FUN_0042db51();
      pcVar1 = *(char **)(unaff_EBP + -0x18);
      if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (DAT_00979520 != 0)) {
        pwStack_98 = (wchar_t *)0x5;
        iStack_a0 = 0x79453f;
        pcStack_9c = pcVar1;
        FUN_00712b76();
      }
    }
    else {
      *(uint *)(unaff_EBP + -0x1c) = uVar10 & 0xff;
      do {
        uVar11 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
        pwVar8 = (wchar_t *)FUN_0042459a();
        pwStack_98 = (wchar_t *)(unaff_EBP + -0x10);
        pcStack_9c = (char *)0x7943b4;
        FUN_0045a1d8();
        pcVar1 = *(char **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (pcVar1 != (char *)0x0) {
            pwStack_98 = L"\xe959í";
            FUN_00434e38();
          }
        }
        else {
          if ((int)pwVar8 < 2) {
            if (pwVar8 == (wchar_t *)0x1) {
              pwStack_98 = (wchar_t *)(unaff_EBP + -0x3c);
              pcStack_9c = (char *)0x794428;
              piVar7 = (int *)FUN_00679d22();
              pwStack_98 = (wchar_t *)*piVar7;
              pcStack_9c = (char *)(unaff_EBP + -0x18);
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              iStack_a0 = 0x79443b;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              goto LAB_007944ad;
            }
            if (pwVar8 == (wchar_t *)0xffffffff) {
              pwStack_98 = (wchar_t *)(unaff_EBP + -0x5c);
              pcStack_9c = (char *)0x79445c;
              piVar7 = (int *)FUN_00679d22();
              pwStack_98 = (wchar_t *)*piVar7;
              pcStack_9c = (char *)(unaff_EBP + -0x18);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              iStack_a0 = 0x79446f;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              goto LAB_007944ad;
            }
            if ((int)pwVar8 < -1) {
              pwStack_98 = (wchar_t *)(unaff_EBP + -0x44);
              pcStack_9c = (char *)0x79448d;
              piVar7 = (int *)FUN_00679d22();
              pcStack_9c = (char *)*piVar7;
              pwStack_98 = (wchar_t *)-(int)pwVar8;
              iStack_a0 = unaff_EBP + -0x18;
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              puStack_a4 = (undefined1 *)0x7944a3;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              goto LAB_007944ad;
            }
          }
          else {
            pwStack_98 = (wchar_t *)(unaff_EBP + -0x70);
            pcStack_9c = (char *)0x7943f3;
            piVar7 = (int *)FUN_00679d22();
            pcStack_9c = (char *)*piVar7;
            iStack_a0 = unaff_EBP + -0x18;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_a4 = (undefined1 *)0x794407;
            pwStack_98 = pwVar8;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
LAB_007944ad:
            FUN_00414ebb();
            pwStack_98 = (wchar_t *)(unaff_EBP + -0x18);
            pcStack_9c = (char *)0x7944bd;
            FUN_00471102();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
        }
        piVar7 = (int *)(unaff_EBP + -0x1c);
        *piVar7 = *piVar7 + -1;
      } while (*piVar7 != 0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794a26;
  case 4:
    uVar10 = FUN_0042452b();
    *(uint *)(unaff_EBP + 8) = uVar10 & 0xff;
    uVar10 = FUN_0042452b();
    if (*(int *)(*(int *)(extraout_ECX + 0x1744) + 4 + (uVar10 & 0xff) * 8) != 0) {
      pwStack_98 = (wchar_t *)0x0;
      pcStack_9c = *(char **)(unaff_EBP + 8);
      iStack_a0 = 0x794580;
      FUN_0061595d();
    }
    break;
  case 5:
    FUN_0042459a();
    pwStack_98 = (wchar_t *)0x79434a;
    pcStack_9c = (char *)FUN_0064d61f();
    if (pcStack_9c != (char *)0x0) {
      pwStack_98 = (wchar_t *)0x3e8;
      iStack_a0 = 0x794362;
      FUN_0079316f();
    }
    break;
  case 6:
    cVar6 = FUN_0042452b();
    uVar10 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x14) = uVar10 & 0xff;
    uVar10 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x1c) = uVar10 & 0xff;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    if (cVar6 == '\0') {
      FUN_0042459a();
      pwStack_98 = (wchar_t *)(unaff_EBP + -0x28);
      pcStack_9c = (char *)0x794605;
      FUN_0045a1d8();
      pwStack_98 = (wchar_t *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pcStack_9c = (char *)0x79461e;
      puVar9 = (undefined4 *)FUN_00679d22();
      pwStack_98 = (wchar_t *)*puVar9;
      pcStack_9c = (char *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_a0 = 0x794630;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
    }
    else {
      pwStack_98 = (wchar_t *)(unaff_EBP + -0x4c);
      pcStack_9c = (char *)0x7945cc;
      piVar7 = (int *)FUN_00679d22();
      pcStack_9c = (char *)*piVar7;
      pwStack_98 = *(wchar_t **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_a0 = unaff_EBP + 8;
      puStack_a4 = (undefined1 *)0x7945e2;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
    }
    FUN_00414ebb();
    pwStack_98 = (wchar_t *)(unaff_EBP + 8);
    pcStack_9c = (char *)0x794656;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794a26;
  case 7:
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x30);
    pcStack_9c = (char *)0x794677;
    puVar9 = (undefined4 *)FUN_00679d86();
    pwStack_98 = (wchar_t *)*puVar9;
    *(undefined4 *)(unaff_EBP + -4) = 0x17;
    pcStack_9c = (char *)0x794688;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794b3b;
  case 8:
    pcStack_9c = (char *)(extraout_ECX + 0xd3c);
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_98;
    iStack_a0 = 0x7946aa;
    FUN_0041160e();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
    *(undefined4 *)(unaff_EBP + -4) = 0x18;
    iStack_ac = 0x7946c3;
    puStack_a4 = extraout_ECX_00;
    FUN_00486ada();
    puStack_a8 = (undefined1 *)0x8ee;
    iStack_ac = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00679d86();
    puStack_a8 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_ac = 0x7946e8;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x40);
    pcStack_9c = (char *)0x794711;
    puVar9 = (undefined4 *)FUN_00679d86();
    pwStack_98 = (wchar_t *)*puVar9;
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    pcStack_9c = (char *)0x794722;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794b3b;
  case 9:
    pcStack_9c = (char *)(extraout_ECX + 0xd3c);
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_98;
    iStack_a0 = 0x794744;
    FUN_0041160e();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
    *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    iStack_ac = 0x79475d;
    puStack_a4 = extraout_ECX_01;
    FUN_00486ada();
    puStack_a8 = (undefined1 *)0x8ef;
    iStack_ac = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    FUN_00679d86();
    puStack_a8 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_ac = 0x794782;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x50);
    pcStack_9c = (char *)0x7947ab;
    puVar9 = (undefined4 *)FUN_00679d86();
    pwStack_98 = (wchar_t *)*puVar9;
    *(undefined4 *)(unaff_EBP + -4) = 0x21;
    pcStack_9c = (char *)0x7947bc;
    FUN_007d4073();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794b3b;
  case 10:
    FUN_0042452b();
    pwStack_98 = (wchar_t *)0x7947dc;
    FUN_0078c08d();
    break;
  case 0xb:
    pwVar8 = (wchar_t *)FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x58);
    *(undefined4 *)(unaff_EBP + -4) = 0x22;
    pcStack_9c = (char *)0x794809;
    puVar9 = (undefined4 *)FUN_00679d86();
    pwStack_98 = (wchar_t *)*puVar9;
    pcStack_9c = (char *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_a0 = 0x79481a;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00402676();
    *(wchar_t ***)(unaff_EBP + -0x14) = &pwStack_98;
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0x79483a;
    FUN_00424e0a();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_a4;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_ac = 0x79484e;
    puStack_a4 = extraout_ECX_02;
    FUN_00486ada();
    puStack_a8 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_ac = 0x79485b;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042c9f9();
    pcStack_9c = (char *)0x794870;
    pwStack_98 = pwVar8;
    FUN_007d3d3e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794b3b;
  case 0xc:
    pwStack_98 = (wchar_t *)0x794889;
    puVar9 = (undefined4 *)FUN_0045cdbc();
    pwStack_98 = (wchar_t *)*puVar9;
    *(undefined4 *)(unaff_EBP + -4) = 0x26;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    pcStack_9c = (char *)0x7948a2;
    FUN_00470891();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_00414ebb();
    uVar10 = -(uint)(*(int *)(extraout_ECX + 0xd74) != 0) & *(int *)(extraout_ECX + 0xd74) - 0xcU;
    iVar12 = *(int *)(uVar10 + 0x128);
    iVar2 = *(int *)(uVar10 + 300);
    iVar3 = *(int *)(uVar10 + 0x18);
    if (*(int *)(extraout_ECX + 0xd74) == 0) {
      pwStack_98 = L"蚋൴";
      FUN_00878dfb();
    }
    iVar4 = *(int *)(extraout_ECX + 0xd74);
    *(int *)(unaff_EBP + -0x14) = iVar4;
    if (iVar4 == 0) {
      pwStack_98 = L"ಡ鞁謀\xec4d뚋൴";
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097810c;
    FUN_00404abb();
    pwStack_98 = L"䶋僤坏\xe853玈￉䶃￼䶍\xe908ǲ";
    pwStack_98 = (wchar_t *)FUN_00404a94();
    pcStack_9c = (char *)((-(uint)(iVar3 != 0) & 5) + (iVar12 * 3000 - iVar2) * 10 + -0x3fff8ad9);
    puStack_a4 = (undefined1 *)0x79493d;
    iStack_a0 = iVar4;
    FUN_0042bcc5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00794b3b;
  case 0xd:
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_98;
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0x794a43;
    FUN_00424e0a();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
    *(undefined4 *)(unaff_EBP + -4) = 0x2c;
    iStack_ac = 0x794a5a;
    FUN_00486ada();
    puStack_a8 = (undefined1 *)0x8ed;
    iStack_ac = unaff_EBP + -0x68;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00679d86();
    puStack_a8 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_ac = 0x794a7d;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    pwStack_98 = u_mCardGet_0096c03c;
    pcStack_9c = (char *)0x794aa2;
    FUN_007d4073();
    break;
  case 0xe:
    pwStack_98 = L"蚋൴";
    FUN_0045cdbc();
    pwStack_98 = (wchar_t *)0x0;
    pcStack_9c = (char *)0xffffffff;
    iStack_a0 = *(int *)(unaff_EBP + 8);
    puStack_a4 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0x29;
    iStack_ac = 0x7949ab;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff70;
    *(wchar_t ***)(unaff_EBP + -0x1c) = &pwStack_98;
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0x7949c9;
    pwStack_98 = extraout_ECX_03;
    FUN_00424e0a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    pcStack_9c = (char *)0x7949d4;
    FUN_00424df4();
    pcStack_9c = (char *)0x7949db;
    pcStack_9c = (char *)FUN_00404abb();
    iStack_a0 = 0x7949e3;
    FUN_00424df4();
    iStack_a0 = 0x7949ea;
    iStack_a0 = FUN_00404a94();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_a4;
    puStack_a8 = (undefined1 *)0x0;
    iStack_ac = 0x7949f7;
    puStack_a4 = extraout_ECX_04;
    FUN_00424dd7();
    puStack_a8 = (undefined1 *)0x0;
    iStack_ac = -1;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    uVar11 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x14));
    iStack_ac = FUN_00456ad5(uVar11);
    FUN_00424e82();
    FUN_0042b613();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00794a26:
    FUN_00414ebb();
    break;
  case 0x10:
    FUN_0042459a();
    pwStack_98 = (wchar_t *)(unaff_EBP + -0x10);
    pcStack_9c = (char *)0x794ac5;
    FUN_00679d86();
    pwStack_98 = *(wchar_t **)(unaff_EBP + -0x10);
    pcStack_9c = (char *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0x30;
    iStack_a0 = 0x794ad9;
    FUN_0041354c();
    pcStack_9c = (char *)(extraout_ECX + 0xd3c);
    *(wchar_t ***)(unaff_EBP + 8) = &pwStack_98;
    iStack_a0 = 0x794af0;
    FUN_0041160e();
    pcStack_9c = (char *)0x0;
    iStack_a0 = 0;
    puStack_a8 = (undefined1 *)&puStack_a4;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_a4;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_ac = 0x794b06;
    puStack_a4 = extraout_ECX_05;
    FUN_00486ada();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    puStack_a8 = (undefined1 *)0x794b12;
    iVar12 = FUN_0043f900();
    puStack_a8 = (undefined1 *)(uint)(iVar12 == 0);
    iStack_ac = 0x794b20;
    iStack_ac = FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    pwStack_98 = L"䶃￼赙\xf04d㛨웛诿\xf44dꖍ､\xffff幟襤\r";
    FUN_007d49e4();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00794b3b:
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


