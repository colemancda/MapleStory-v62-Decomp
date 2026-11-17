/* ptr_0044ffff - 0x0044ffff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044ffff(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 int *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 uVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iVar7;
  wchar_t *in_stack_00000024;
  int *in_stack_00000028;
  int *in_stack_0000002c;
  
  do {
    *(BADSPACEBASE **)(unaff_EBP + -0x18) = register0x00000010;
    FUN_00450368(in_EAX);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_004503f5();
    FUN_007e3c88();
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    iVar7 = 0;
    while ((piVar2 = (int *)*unaff_ESI, piVar2 != unaff_EBX &&
           (*(uint *)(unaff_EBP + -0x18) < (uint)piVar2[-1]))) {
      piVar1 = (int *)((int)piVar2 + iVar7 + 0x1c);
      *piVar1 = *piVar1 + *(int *)(unaff_EBP + -0x34);
      if ((int *)*unaff_ESI == unaff_EBX) {
        iVar5 = 0;
      }
      else {
        iVar5 = ((int *)*unaff_ESI)[-1];
      }
      if (*(int *)(unaff_EBP + -0x18) == iVar5 + -1) {
        *(int *)(unaff_EBP + -0x34) =
             *(int *)((int)piVar2 + iVar7 + 0x24) + 10 + *(int *)((int)piVar2 + iVar7 + 0x1c);
      }
      if (*(int *)(unaff_EBP + -0x10) == 1) {
        iVar5 = (0xbe - *(int *)((int)piVar2 + iVar7 + 0x20)) / 2;
LAB_0045007c:
        *(int *)((int)piVar2 + iVar7 + 0x18) = iVar5;
      }
      else if (*(int *)(unaff_EBP + -0x10) == 2) {
        iVar5 = 0xbe - *(int *)((int)piVar2 + iVar7 + 0x20);
        goto LAB_0045007c;
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar7 = iVar7 + 0x3c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    in_stack_0000002c = (int *)0x450093;
    FUN_00414ebb();
    in_stack_0000002c = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (in_stack_0000002c != unaff_EBX) {
      in_stack_00000028 = (int *)0x4500a4;
      (**(code **)(*in_stack_0000002c + 8))();
    }
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    iVar7 = *(int *)(unaff_EBP + -0x30);
    while( true ) {
      in_stack_0000002c = (int *)0x44fe36;
      FUN_0087a1b0();
      in_stack_00000024 = (wchar_t *)&stack0x00000030;
      FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x10) = &stack0x00000024;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      in_stack_00000024 =
           L"쌻䖉规\xec5dᵴ䖍僄䶍\xe8ec䲦\xfffb쌻ൽȽ@璀倆惨䊏贀粅\xffff僿䗆ࣼᣨשּׂ㯿姃ٽ\xe850轅B崹࿬\xf084\x01뼀脬\x97兗첋斉뻰䊤\x96\xe856㓋\xfffb䖍傌䶍웬ﱅ\xe808❗\xfffb좋럨שּ僿䗆ૼ컨﹄姿卙卓橓僿卓ᗿ듌\x97삃范ﳠ鷨䊢謀櫄僿兗첋斉困糨הּ跿鱅赐\xec4d䗆ૼࣨﬧ诿\xe8c8䥨\xfffb왐ﱅ\xe80c䑿\xfffe奙\xe850ǀ"
      ;
      piVar2 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x3c) = piVar2;
      *(int **)(unaff_EBP + -0x14) = unaff_EBX;
      if (piVar2 != unaff_EBX) {
        in_stack_0000002c = (int *)(unaff_EBP + -0x3c);
        in_stack_00000028 = (int *)0x44fe8a;
        in_stack_0000002c = (int *)FUN_00404b30();
        if (((int)in_stack_0000002c < (int)unaff_EBX) && (in_stack_0000002c != (int *)0x80004002)) {
          in_stack_00000028 = (int *)0x44fe9b;
          FUN_00878dfb();
        }
      }
      in_stack_0000002c = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      in_stack_00000028 = (int *)0x44feab;
      iVar3 = FUN_00402bc3();
      iVar5 = (int)in_stack_0000002c;
      if (iVar3 < (int)unaff_EBX) {
        in_stack_00000028 = (int *)0x44feb6;
        in_stack_0000002c = (int *)iVar3;
        FUN_00878dfb();
        iVar5 = extraout_ECX;
      }
      if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) break;
      in_stack_0000002c = *(int **)(unaff_EBP + -0x24);
      uVar6 = SUB41(unaff_EBX,0);
      *(undefined1 *)(unaff_EBP + -4) = uVar6;
      if (in_stack_0000002c != unaff_EBX) {
        in_stack_00000028 = (int *)0x4500bf;
        (**(code **)(*in_stack_0000002c + 8))();
      }
      while( true ) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
        if (1 < *(int *)(unaff_EBP + -0x1c)) {
          *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(unaff_EBP + 8);
          in_stack_0000002c = (int *)0x4500dd;
          FUN_00450157();
          in_stack_00000028 = (int *)0x4500e5;
          FUN_008161f1();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
            in_stack_00000028 = (int *)0x4500f7;
            FUN_004504e6();
          }
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        in_stack_0000002c = (int *)0x44fd91;
        FUN_0045059d();
        in_stack_0000002c = (int *)0x44fd99;
        FUN_0087a1b0();
        in_stack_00000024 = (wchar_t *)&stack0x00000030;
        FUN_00412335();
        *(wchar_t ***)(unaff_EBP + -0x10) = &stack0x00000024;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = uVar6;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        in_stack_00000024 = (wchar_t *)0x44fddc;
        piVar2 = (int *)FUN_004032b4();
        *(int **)(unaff_EBP + -0x38) = piVar2;
        *(int **)(unaff_EBP + -0x24) = unaff_EBX;
        if (piVar2 != unaff_EBX) {
          in_stack_0000002c = (int *)(unaff_EBP + -0x38);
          in_stack_00000028 = (int *)0x44fdf2;
          in_stack_0000002c = (int *)FUN_00404b30();
          if (((int)in_stack_0000002c < (int)unaff_EBX) && (in_stack_0000002c != (int *)0x80004002))
          {
            in_stack_00000028 = (int *)0x44fe03;
            FUN_00878dfb();
          }
        }
        in_stack_0000002c = (int *)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        in_stack_00000028 = (int *)0x44fe10;
        in_stack_0000002c = (int *)FUN_00402bc3();
        if ((int)in_stack_0000002c < (int)unaff_EBX) {
          in_stack_00000028 = (int *)0x44fe1b;
          FUN_00878dfb();
        }
        if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) break;
        *(undefined1 *)(unaff_EBP + -4) = uVar6;
      }
      *(int **)(unaff_EBP + -0x34) = unaff_EBX;
      *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
    }
    in_stack_0000002c = (int *)&DAT_0097812c;
    *(int ***)(unaff_EBP + -0x10) = &stack0x00000028;
    in_stack_00000024 = u_text_009642a4;
    in_stack_00000028 = (int *)iVar5;
    FUN_004033a1();
    in_stack_00000024 = (wchar_t *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d();
    in_stack_00000028 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    in_stack_00000024 = (wchar_t *)0x44fef7;
    FUN_004343c5();
    param_4 = unaff_EBX;
    param_5 = unaff_EBX;
    in_stack_00000024 = (wchar_t *)unaff_EBX;
    in_stack_00000028 = unaff_EBX;
    in_stack_0000002c = unaff_EBX;
    (*DAT_0097b4cc)();
    FUN_0087a1b0();
    *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
    param_2 = (undefined4 *)&stack0x00000010;
    FUN_004033a1(u_text_009642a4);
    iVar7 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0040263d(iVar7);
    FUN_004048a4(iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004343c5();
    param_2 = (undefined4 *)FUN_0045010e();
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    FUN_00414edd();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    param_2 = (undefined4 *)0x44ff6c;
    iVar7 = FUN_00402bc3();
    if (iVar7 < (int)unaff_EBX) {
      param_2 = (undefined4 *)0x44ff77;
      FUN_00878dfb();
    }
    iVar7 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    param_2 = (undefined4 *)0x44ff84;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      param_2 = (undefined4 *)0x44ff8f;
      FUN_00878dfb();
      iVar7 = extraout_ECX_00;
    }
    *(undefined4 ***)(unaff_EBP + -0x10) = &param_2;
    param_2 = (undefined4 *)iVar7;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0040263d();
    param_2 = (undefined4 *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar4 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar7 = FUN_00402bc3();
    if (iVar7 < (int)unaff_EBX) {
      param_2 = (undefined4 *)0x44ffe4;
      FUN_00878dfb();
    }
    param_2 = (undefined4 *)0x44ffee;
    unaff_ESI = (int *)FUN_00450613();
    param_2 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x564);
    in_EAX = unaff_EBP + -0x28;
  } while( true );
}


