/* FUN_0081c2f9 - 0x0081c2f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0081c2f9(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  wchar_t *pwStack_6c;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff9c;
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iVar7 = 0;
  do {
    if (9 < iVar7) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        for (iVar7 = 0x8c; iVar7 < 0x8f; iVar7 = iVar7 + 1) {
          iStack_70 = unaff_EBP + -0x1c;
          pwStack_6c = u_Map_WorldMap_WorldMap_d_img_0096c418;
          iStack_74 = 0x81c4d4;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          pwStack_6c = 
          L"䖍梬ڐ\x98\xe850楃ﾾ쌻奙ٽ\xe850준\x05䖍傼䗆೼훿䖍梼ڐ\x98\xe850椟ﾾ쌻奙ٽ\xe850죜\x05卓䖍催䖍傼䶍웤ﱅ\xe80d儌﾿譑觌챥\xe850湠ﾾ䗆໼폨뺔诿\xe8c8意ﾾ䶍农좋䗆෼ꋨ뺄诿웈ﱅ\xe80f浉ﾾ䖉跐큅赐\xec4d뛨뺅㯿緃㴍䀂耀ٴ\xe850조\x05䖍傜䗆෼⯨빦㯿姃ٽ\xe850졘\x05䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
          ;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
          pwStack_6c = (wchar_t *)(unaff_EBP + -0x54);
          iStack_70 = 0x81c4ef;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            pwStack_6c = 
            L"䖍傼䗆೼훿䖍梼ڐ\x98\xe850椟ﾾ쌻奙ٽ\xe850죜\x05卓䖍催䖍傼䶍웤ﱅ\xe80d儌﾿譑觌챥\xe850湠ﾾ䗆໼폨뺔诿\xe8c8意ﾾ䶍农좋䗆෼ꋨ뺄诿웈ﱅ\xe80f浉ﾾ䖉跐큅赐\xec4d뛨뺅㯿緃㴍䀂耀ٴ\xe850조\x05䖍傜䗆෼⯨빦㯿姃ٽ\xe850졘\x05䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          pwStack_6c = 
          L"䖍梼ڐ\x98\xe850椟ﾾ쌻奙ٽ\xe850죜\x05卓䖍催䖍傼䶍웤ﱅ\xe80d儌﾿譑觌챥\xe850湠ﾾ䗆໼폨뺔诿\xe8c8意ﾾ䶍农좋䗆෼ꋨ뺄诿웈ﱅ\xe80f浉ﾾ䖉跐큅赐\xec4d뛨뺅㯿緃㴍䀂耀ٴ\xe850조\x05䖍傜䗆෼⯨빦㯿姃ٽ\xe850졘\x05䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
          ;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          pwStack_6c = (wchar_t *)(unaff_EBP + -0x44);
          iStack_70 = 0x81c513;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            pwStack_6c = 
            L"卓䖍催䖍傼䶍웤ﱅ\xe80d儌﾿譑觌챥\xe850湠ﾾ䗆໼폨뺔诿\xe8c8意ﾾ䶍农좋䗆෼ꋨ뺄诿웈ﱅ\xe80f浉ﾾ䖉跐큅赐\xec4d뛨뺅㯿緃㴍䀂耀ٴ\xe850조\x05䖍傜䗆෼⯨빦㯿姃ٽ\xe850졘\x05䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
          }
          pwStack_6c = (wchar_t *)0x0;
          iStack_70 = unaff_EBP + -0x54;
          iStack_74 = unaff_EBP + -0x44;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          uStack_78 = 0x81c535;
          uVar4 = FUN_00411641();
          *(undefined4 **)(unaff_EBP + -0x34) = &uStack_78;
          FUN_004033a1(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00405a1d();
          FUN_00402660();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00404a02(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_70 = 0x81c56b;
          uVar4 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
          pwStack_6c = (wchar_t *)0x81c57a;
          iVar5 = FUN_00404b30();
          if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
            pwStack_6c = 
            L"䖍傜䗆෼⯨빦㯿姃ٽ\xe850졘\x05䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          pwStack_6c = (wchar_t *)0x81c598;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            pwStack_6c = 
            L"䖍傼䗆೼Ꮸ빦㯿姃ٽ\xe850졀\x05䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          pwStack_6c = (wchar_t *)0x81c5b0;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            pwStack_6c = 
            L"䖍催䗆௼ﯨ빥㯿姃ٽ\xe850젨\x05痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          pwStack_6c = (wchar_t *)0x81c5c8;
          pwVar2 = (wchar_t *)(unaff_EBP + -0x54);
          iVar5 = FUN_00402bc3();
          pwStack_6c = pwVar2;
          if (iVar5 < 0) {
            pwStack_6c = 
            L"痿贌\xec45譑觌챥\xe850蟗￀䶋\xe8dc利\xffff쌻╴疋诨\xec45\xf03bᕴ䶍觨\xe845웨뽟㯿瓳謆嘆僿예ﱅ\xeb03윕ﱅ\x03"
            ;
            FUN_00878dfb();
            pwStack_6c = extraout_ECX_01;
          }
          iStack_70 = unaff_EBP + -0x14;
          *(wchar_t ***)(unaff_EBP + -0x34) = &pwStack_6c;
          iStack_74 = 0x81c5e5;
          FUN_00424dbc();
          iStack_70 = 0x81c5ed;
          iVar5 = FUN_0081bfca();
          if (iVar5 != 0) {
            piVar6 = *(int **)(unaff_EBP + -0x18);
            if (piVar6 != *(int **)(unaff_EBP + -0x14)) {
              *(int **)(unaff_EBP + -0x18) = *(int **)(unaff_EBP + -0x14);
              FUN_004125cc();
              if (piVar6 != (int *)0x0) {
                pwStack_6c = L"䗆ϼᗫ䗇ϼ";
                (**(code **)(*piVar6 + 8))();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            piVar6 = (int *)FUN_0081c62b();
            return piVar6;
          }
          *(undefined4 *)(unaff_EBP + -4) = 3;
        }
        piVar1 = *(int **)(unaff_EBP + -0x18);
        piVar6 = *(int **)(unaff_EBP + 8);
        *piVar6 = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          pwStack_6c = 
          L"䶃Ǡ䶍웤ﱅ\xe802怩ﾾ䖋㯬웃ﱅ琁謆倈凿謈\xe845쌻嶈瓼謆倈凿謈\xf44d譟廆襤\r"
          ;
          (**(code **)(*piVar1 + 4))();
        }
        *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 1;
      }
      else {
LAB_0081c493:
        piVar1 = *(int **)(unaff_EBP + -0x18);
        piVar6 = *(int **)(unaff_EBP + 8);
        *piVar6 = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          pwStack_6c = L"䶃Ǡ鏩\x01謀\xf835躂뼀\x8c";
          (**(code **)(*piVar1 + 4))();
        }
        *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        pwStack_6c = L"䖋㯨裃ﱝٴࢋｐࡑ䶋忴욋摞ඉ";
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        pwStack_6c = L"䶋忴욋摞ඉ";
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return piVar6;
    }
    pwStack_6c = (wchar_t *)(unaff_EBP + -0x28);
    iStack_70 = 0x81c349;
    puVar3 = (undefined4 *)FUN_00679d86();
    pwStack_6c = (wchar_t *)*puVar3;
    iStack_70 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_74 = 0x81c35f;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      pwStack_6c = 
      L"뽙ڐ\x98赗뱍䗆׼ࣨ빮埿䶍욬ﱅ\xe806添ﾾ卓䖍傼䖍催䶍웤ﱅ\xe807劕﾿譑觌챥\xe850濩ﾾ䗆ࣼ峨뺖诿\xe8c8折ﾾ䶍农좋䗆߼⯨뺆诿웈ﱅ\xe809滒ﾾ䖉跔푅赐\xec4d㿨뺇㯿緃㴍䀂耀ٴ\xe850짹\x05䖍傜䗆߼듨빧㯿姃ٽ\xe850짡\x05䖍催䗆ۼ鳨빧㯿姃ٽ\xe850짉\x05䖍傼䗆׼蓨빧㯿姃ٽ\xe850즱\x05痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
      ;
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_6c = (wchar_t *)0x81c389;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    pwStack_6c = 
    L"卓䖍傼䖍催䶍웤ﱅ\xe807劕﾿譑觌챥\xe850濩ﾾ䗆ࣼ峨뺖诿\xe8c8折ﾾ䶍农좋䗆߼⯨뺆诿웈ﱅ\xe809滒ﾾ䖉跔푅赐\xec4d㿨뺇㯿緃㴍䀂耀ٴ\xe850짹\x05䖍傜䗆߼듨빧㯿姃ٽ\xe850짡\x05䖍催䗆ۼ鳨빧㯿姃ٽ\xe850짉\x05䖍傼䗆׼蓨빧㯿姃ٽ\xe850즱\x05痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
    ;
    FUN_00403191();
    pwStack_6c = (wchar_t *)0x0;
    iStack_70 = unaff_EBP + -0x44;
    iStack_74 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_78 = 0x81c3ac;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x34) = &uStack_78;
    FUN_004033a1(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00405a1d();
    FUN_00402660();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00404a02(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_70 = 0x81c3e2;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    pwStack_6c = (wchar_t *)0x81c3f1;
    iVar5 = FUN_00404b30();
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      pwStack_6c = 
      L"䖍傜䗆߼듨빧㯿姃ٽ\xe850짡\x05䖍催䗆ۼ鳨빧㯿姃ٽ\xe850짉\x05䖍傼䗆׼蓨빧㯿姃ٽ\xe850즱\x05痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
      ;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    pwStack_6c = (wchar_t *)0x81c40f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      pwStack_6c = 
      L"䖍催䗆ۼ鳨빧㯿姃ٽ\xe850짉\x05䖍傼䗆׼蓨빧㯿姃ٽ\xe850즱\x05痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
      ;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    pwStack_6c = (wchar_t *)0x81c427;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      pwStack_6c = 
      L"䖍傼䗆׼蓨빧㯿姃ٽ\xe850즱\x05痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
      ;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    pwStack_6c = (wchar_t *)0x81c43f;
    pwVar2 = (wchar_t *)(unaff_EBP + -0x44);
    iVar5 = FUN_00402bc3();
    pwStack_6c = pwVar2;
    if (iVar5 < 0) {
      pwStack_6c = 
      L"痿贌\xec45譑觌챥\xe850襠￀䶋\xe8dcﭦ\xffff쌻ᅴ痿跬\xe84d䷨빣웿ﱅ\xeb03윚ﱅ\x03"
      ;
      FUN_00878dfb();
      pwStack_6c = extraout_ECX_00;
    }
    iStack_70 = unaff_EBP + -0x14;
    *(wchar_t ***)(unaff_EBP + -0x34) = &pwStack_6c;
    iStack_74 = 0x81c45c;
    FUN_00424dbc();
    iStack_70 = 0x81c464;
    iVar5 = FUN_0081bfca();
    if (iVar5 != 0) {
      pwStack_6c = L"䗆ϼ᫫䗇ϼ";
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 *(IBinding **)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_0081c493;
    }
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iVar7 = iVar7 + 1;
  } while( true );
}


