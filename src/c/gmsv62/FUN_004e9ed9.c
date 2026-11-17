/* FUN_004e9ed9 - 0x004e9ed9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e9ed9(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  char *_Str2;
  char *_Str1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = DAT_00978368;
  iVar5 = FUN_00455c59();
  iVar5 = *(int *)(iVar5 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  sVar4 = FUN_0045f084(iVar5 + 0x39);
  if (sVar4 == 0) {
    bVar3 = FUN_0045f03e(iVar5 + 0x33);
    if (9 < bVar3) goto LAB_004e9f61;
    uVar6 = FUN_00679d22(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
LAB_004e9f61:
    if (*(int *)(iVar2 + 0x2098) == 0) {
      _Str2 = (char *)0x0;
    }
    else {
      _Str2 = (char *)(*(int *)(iVar2 + 0x2098) + 4);
    }
    if (_Str2 == (char *)0x0) {
      _Str2 = DAT_00980dfc;
    }
    piVar1 = *(int **)(unaff_EBP + 8);
    _Str1 = (char *)*piVar1;
    if (_Str1 == (char *)0x0) {
      _Str1 = DAT_00980dfc;
    }
    iVar5 = _strcmp(_Str1,_Str2);
    if (iVar5 != 0) {
      if (*(int *)(iVar2 + 0x2b40) != 0) {
        if (*(int *)(iVar2 + 0x2bf2) != *(int *)(iVar2 + 0x2088)) {
          uVar6 = FUN_00679d22(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_00471102(uVar6);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_004ea048;
        }
        if (*(int *)(iVar2 + 0x2b40) != 0) {
          iVar5 = FUN_0085c65a();
          if (5 < iVar5) {
            uVar6 = FUN_00679d22(unaff_EBP + -0x10);
            *(undefined4 *)(unaff_EBP + -4) = 3;
            FUN_00471102(uVar6);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            goto LAB_004ea048;
          }
        }
      }
      FUN_0060142b(0x70,0);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_00457cda();
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffd4;
      FUN_00414f8b(piVar1);
      FUN_00459cb5();
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
      goto LAB_004ea09b;
    }
    uVar6 = FUN_00679d22(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_004ea048:
  FUN_00414ebb();
LAB_004ea09b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


