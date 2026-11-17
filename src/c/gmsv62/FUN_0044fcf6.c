/* FUN_0044fcf6 - 0x0044fcf6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044fcf6(void)

{
  undefined4 *_Dst;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_c4;
  wchar_t *pwStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(extraout_ECX + 0x68);
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  if (((iVar1 != iVar2) && (-1 < iVar2)) && (iVar2 <= *(int *)(extraout_ECX + 0x6c))) {
    _Dst = (undefined4 *)FUN_004029b9();
    if (_Dst == (undefined4 *)0x0) {
      _Dst = (undefined4 *)0x0;
    }
    else {
      *_Dst = &PTR_LAB_008e84a0;
      iStack_a4 = 0x44fd4e;
      _memset(_Dst,0,0xc);
      *_Dst = &PTR_FUN_008e8ea8;
      _Dst[4] = 0xbe;
      _Dst[3] = 1;
    }
    *(undefined4 **)(unaff_EBP + -0x40) = _Dst;
    if (_Dst != (undefined4 *)0x0) {
      InterlockedIncrement(_Dst + 1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(int *)(unaff_EBP + -0x20) = extraout_ECX + 0x55c;
    iVar2 = extraout_ECX;
    do {
      FUN_0045059d();
      FUN_0087a1b0();
      iStack_a4 = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 8);
      uStack_a8 = 0x44fdac;
      iStack_a4 = FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff60;
      uStack_a8 = 0x44fdb8;
      FUN_004033a1();
      iStack_a4 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_a8 = 0x44fdca;
      FUN_0040263d();
      uStack_a8 = 0x44fdd1;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x38) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        while( true ) {
          FUN_0087a1b0();
          iStack_a4 = *(undefined4 *)(unaff_EBP + -0x2c);
          uStack_a8 = 0x44fe43;
          iStack_a4 = FUN_00412335();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff60;
          uStack_a8 = 0x44fe4f;
          FUN_004033a1();
          iStack_a4 = unaff_EBP + -0x84;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uStack_a8 = 0x44fe62;
          FUN_0040263d();
          uStack_a8 = 0x44fe69;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar1 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x3c) = iVar1;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          if (iVar1 != 0) {
            iVar1 = FUN_00404b30();
            if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) break;
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff64;
          iStack_a4 = 0x44fed6;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_a4 = 0x44fee6;
          FUN_0040263d();
          iStack_a4 = 0x44feed;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          uStack_ac = FUN_004343c5();
          iStack_a4 = 0;
          uStack_a8 = 0xffffffff;
          uStack_b0 = 0;
          uStack_b4 = 0;
          puStack_b8 = (undefined1 *)0x44ff08;
          (*DAT_0097b4cc)();
          puStack_b8 = (undefined1 *)0x44ff13;
          FUN_0087a1b0();
          puStack_b8 = (undefined1 *)0xffffffff;
          pwStack_c0 = (wchar_t *)&DAT_0097812c;
          *(undefined4 **)(unaff_EBP + -0x10) = &uStack_c4;
          puStack_bc = (undefined1 *)&uStack_b4;
          FUN_004033a1(u_text_009642a4);
          iVar2 = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_0040263d(iVar2);
          uStack_c4 = FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          pwStack_c0 = (wchar_t *)FUN_004343c5();
          uStack_c4 = 0x44ff4e;
          puStack_bc = (undefined1 *)FUN_0045010e();
          puStack_b8 = (undefined1 *)0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          pwStack_c0 = 
          L"䖍傜䗆࿼埨שּׁ㯿姃ٽ\xe850躄B䖍傌䗆໼㿨שּׁ㯿姃ٽ\xe850蹬B兓첋斉棰䊘\x96Ǩהּ跿沅\xffff僿䶍웬ﱅ\xe80e⚊\xfffb좋\xeae8רּ僿䗆ᇼ賨ﰥ觿\xf045薍ｬ\xffff왐ﱅ\xe80e⯬\xfffb쒃㬌緃倆៨䊎謀\xe04dｪ◨\x06謀诰큅Փդ"
          ;
          FUN_00414edd();
          puStack_b8 = (undefined1 *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_bc = (undefined1 *)0x44ff6c;
          puStack_b8 = (undefined1 *)FUN_00402bc3();
          if ((int)puStack_b8 < 0) {
            puStack_bc = (undefined1 *)0x44ff77;
            FUN_00878dfb();
          }
          puStack_b8 = (undefined1 *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_bc = (undefined1 *)0x44ff84;
          iVar2 = FUN_00402bc3();
          puStack_bc = puStack_b8;
          if (iVar2 < 0) {
            puStack_bc = (undefined1 *)0x44ff8f;
            puStack_b8 = (undefined1 *)iVar2;
            FUN_00878dfb();
            puStack_bc = extraout_ECX_00;
          }
          puStack_b8 = (undefined1 *)0x0;
          *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_bc;
          pwStack_c0 = u_align_00964298;
          uStack_c4 = 0x44ffa0;
          FUN_004033a1();
          pwStack_c0 = (wchar_t *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          uStack_c4 = 0x44ffb3;
          FUN_0040263d();
          uStack_c4 = 0x44ffba;
          puStack_bc = (undefined1 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          pwStack_c0 = L"䖉跰沅\xffff僿䗆໼\xece8שׂ菿ೄ쌻ٽ\xe850踗B䶋櫠\xe8ffإ";
          uVar3 = FUN_00412550();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
          pwStack_c0 = (wchar_t *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          uStack_c4 = 0x44ffd7;
          puStack_b8 = (undefined1 *)FUN_00402bc3();
          if ((int)puStack_b8 < 0) {
            puStack_bc = (undefined1 *)0x44ffe4;
            FUN_00878dfb();
          }
          puStack_b8 = (undefined1 *)0xffffffff;
          puStack_bc = (undefined1 *)0x44ffee;
          piVar4 = (int *)FUN_00450613();
          puStack_b8 = (undefined1 *)0x0;
          puStack_bc = (undefined1 *)(*(int *)(unaff_EBP + -0x30) + 0x564);
          *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
          pwStack_c0 = (wchar_t *)piVar4;
          FUN_00450368(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_004503f5();
          FUN_007e3c88();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          iVar2 = 0;
          while ((iVar1 = *piVar4, iVar1 != 0 &&
                 (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar1 + -4)))) {
            iVar1 = iVar2 + iVar1;
            *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + *(int *)(unaff_EBP + -0x34);
            if (*piVar4 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(*piVar4 + -4);
            }
            if (*(int *)(unaff_EBP + -0x18) == iVar5 + -1) {
              *(int *)(unaff_EBP + -0x34) = *(int *)(iVar1 + 0x24) + 10 + *(int *)(iVar1 + 0x1c);
            }
            if (*(int *)(unaff_EBP + -0x10) == 1) {
              iVar5 = (0xbe - *(int *)(iVar1 + 0x20)) / 2;
LAB_0045007c:
              *(int *)(iVar1 + 0x18) = iVar5;
            }
            else if (*(int *)(unaff_EBP + -0x10) == 2) {
              iVar5 = 0xbe - *(int *)(iVar1 + 0x20);
              goto LAB_0045007c;
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            iVar2 = iVar2 + 0x3c;
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
          }
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
          iVar2 = *(int *)(unaff_EBP + -0x30);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
    } while (*(int *)(unaff_EBP + -0x1c) < 2);
    *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(unaff_EBP + 8);
    FUN_00450157();
    FUN_008161f1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      FUN_004504e6();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


