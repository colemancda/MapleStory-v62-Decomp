/* ptr_0044fee8 - 0x0044fee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044fee8(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar8;
  undefined1 uVar9;
  int *unaff_EBX;
  int unaff_EBP;
  wchar_t *unaff_ESI;
  undefined *unaff_EDI;
  undefined4 uStack_24;
  wchar_t *pwStack_20;
  undefined1 *puStack_1c;
  
  do {
    param_1 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_004343c5();
    param_1 = unaff_EBX;
    (*DAT_0097b4cc)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_24;
    pwStack_20 = (wchar_t *)unaff_EDI;
    puStack_1c = &stack0xffffffec;
    FUN_004033a1(unaff_ESI);
    iVar4 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0040263d(iVar4);
    uStack_24 = FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    pwStack_20 = (wchar_t *)FUN_004343c5();
    uStack_24 = 0x44ff4e;
    puStack_1c = (undefined1 *)FUN_0045010e();
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    pwStack_20 = 
    L"䖍傜䗆࿼埨שּׁ㯿姃ٽ\xe850躄B䖍傌䗆໼㿨שּׁ㯿姃ٽ\xe850蹬B兓첋斉棰䊘\x96Ǩהּ跿沅\xffff僿䶍웬ﱅ\xe80e⚊\xfffb좋\xeae8רּ僿䗆ᇼ賨ﰥ觿\xf045薍ｬ\xffff왐ﱅ\xe80e⯬\xfffb쒃㬌緃倆៨䊎謀\xe04dｪ◨\x06謀诰큅Փդ"
    ;
    FUN_00414edd();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_1c = (undefined1 *)0x44ff6c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      puStack_1c = (undefined1 *)0x44ff77;
      FUN_00878dfb();
    }
    puVar8 = (undefined1 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_1c = (undefined1 *)0x44ff84;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      puStack_1c = (undefined1 *)0x44ff8f;
      FUN_00878dfb();
      puVar8 = extraout_ECX_00;
    }
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1c;
    pwStack_20 = u_align_00964298;
    uStack_24 = 0x44ffa0;
    puStack_1c = puVar8;
    FUN_004033a1();
    pwStack_20 = (wchar_t *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_24 = 0x44ffb3;
    FUN_0040263d();
    uStack_24 = 0x44ffba;
    puStack_1c = (undefined1 *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    pwStack_20 = L"䖉跰沅\xffff僿䗆໼\xece8שׂ菿ೄ쌻ٽ\xe850踗B䶋櫠\xe8ffإ";
    uVar5 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    pwStack_20 = (wchar_t *)(unaff_EBP + -0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_24 = 0x44ffd7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      puStack_1c = (undefined1 *)0x44ffe4;
      FUN_00878dfb();
    }
    puStack_1c = (undefined1 *)0x44ffee;
    piVar6 = (int *)FUN_00450613();
    puStack_1c = (undefined1 *)(*(int *)(unaff_EBP + -0x30) + 0x564);
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_24;
    pwStack_20 = (wchar_t *)piVar6;
    FUN_00450368(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_004503f5();
    FUN_007e3c88();
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    iVar4 = 0;
    while ((piVar2 = (int *)*piVar6, piVar2 != unaff_EBX &&
           (*(uint *)(unaff_EBP + -0x18) < (uint)piVar2[-1]))) {
      piVar1 = (int *)((int)piVar2 + iVar4 + 0x1c);
      *piVar1 = *piVar1 + *(int *)(unaff_EBP + -0x34);
      if ((int *)*piVar6 == unaff_EBX) {
        iVar7 = 0;
      }
      else {
        iVar7 = ((int *)*piVar6)[-1];
      }
      if (*(int *)(unaff_EBP + -0x18) == iVar7 + -1) {
        *(int *)(unaff_EBP + -0x34) =
             *(int *)((int)piVar2 + iVar4 + 0x24) + 10 + *(int *)((int)piVar2 + iVar4 + 0x1c);
      }
      if (*(int *)(unaff_EBP + -0x10) == 1) {
        iVar7 = (0xbe - *(int *)((int)piVar2 + iVar4 + 0x20)) / 2;
LAB_0045007c:
        *(int *)((int)piVar2 + iVar4 + 0x18) = iVar7;
      }
      else if (*(int *)(unaff_EBP + -0x10) == 2) {
        iVar7 = 0xbe - *(int *)((int)piVar2 + iVar4 + 0x20);
        goto LAB_0045007c;
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar4 = iVar4 + 0x3c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    param_2 = (int *)0x450093;
    FUN_00414ebb();
    param_2 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (param_2 != unaff_EBX) {
      param_1 = (int *)0x4500a4;
      (**(code **)(*param_2 + 8))();
    }
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    iVar4 = *(int *)(unaff_EBP + -0x30);
    while( true ) {
      param_2 = (int *)0x44fe36;
      FUN_0087a1b0();
      FUN_00412335();
      *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piVar6 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x3c) = piVar6;
      *(int **)(unaff_EBP + -0x14) = unaff_EBX;
      if (piVar6 != unaff_EBX) {
        param_2 = (int *)(unaff_EBP + -0x3c);
        param_1 = (int *)0x44fe8a;
        param_2 = (int *)FUN_00404b30();
        if (((int)param_2 < (int)unaff_EBX) && (param_2 != (int *)0x80004002)) {
          param_1 = (int *)0x44fe9b;
          FUN_00878dfb();
        }
      }
      param_2 = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      param_1 = (int *)0x44feab;
      iVar3 = FUN_00402bc3();
      iVar7 = (int)param_2;
      if (iVar3 < (int)unaff_EBX) {
        param_1 = (int *)0x44feb6;
        param_2 = (int *)iVar3;
        FUN_00878dfb();
        iVar7 = extraout_ECX;
      }
      if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) break;
      param_2 = *(int **)(unaff_EBP + -0x24);
      uVar9 = SUB41(unaff_EBX,0);
      *(undefined1 *)(unaff_EBP + -4) = uVar9;
      if (param_2 != unaff_EBX) {
        param_1 = (int *)0x4500bf;
        (**(code **)(*param_2 + 8))();
      }
      while( true ) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
        if (1 < *(int *)(unaff_EBP + -0x1c)) {
          *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(unaff_EBP + 8);
          param_2 = (int *)0x4500dd;
          FUN_00450157();
          param_1 = (int *)0x4500e5;
          FUN_008161f1();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
            param_1 = (int *)0x4500f7;
            FUN_004504e6();
          }
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        param_2 = (int *)0x44fd91;
        FUN_0045059d();
        param_2 = (int *)0x44fd99;
        FUN_0087a1b0();
        FUN_00412335();
        *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = uVar9;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piVar6 = (int *)FUN_004032b4();
        *(int **)(unaff_EBP + -0x38) = piVar6;
        *(int **)(unaff_EBP + -0x24) = unaff_EBX;
        if (piVar6 != unaff_EBX) {
          param_2 = (int *)(unaff_EBP + -0x38);
          param_1 = (int *)0x44fdf2;
          param_2 = (int *)FUN_00404b30();
          if (((int)param_2 < (int)unaff_EBX) && (param_2 != (int *)0x80004002)) {
            param_1 = (int *)0x44fe03;
            FUN_00878dfb();
          }
        }
        param_2 = (int *)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        param_1 = (int *)0x44fe10;
        param_2 = (int *)FUN_00402bc3();
        if ((int)param_2 < (int)unaff_EBX) {
          param_1 = (int *)0x44fe1b;
          FUN_00878dfb();
        }
        if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) break;
        *(undefined1 *)(unaff_EBP + -4) = uVar9;
      }
      *(int **)(unaff_EBP + -0x34) = unaff_EBX;
      *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
    }
    unaff_EDI = &DAT_0097812c;
    param_2 = (int *)&DAT_0097812c;
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0x00000004;
    unaff_ESI = u_text_009642a4;
    param_1 = (int *)iVar7;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d();
  } while( true );
}


