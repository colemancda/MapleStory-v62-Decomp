/* FUN_006166e9 - 0x006166e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006166e9(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *_Str1;
  int iVar4;
  int extraout_ECX;
  char *_Str2;
  uint uVar5;
  int unaff_EBP;
  int *piVar6;
  int iVar7;
  
  FUN_00879bb8();
  FUN_004245d2(unaff_EBP + -0x30,8);
  if ((*(int *)(unaff_EBP + -0x30) == *(int *)(extraout_ECX + 0x90)) &&
     (*(int *)(unaff_EBP + -0x2c) == *(int *)(extraout_ECX + 0x94))) {
    piVar6 = (int *)(extraout_ECX + 0x7c);
    FUN_00445a30();
    bVar1 = FUN_0042452b();
    uVar5 = (uint)bVar1;
    *(uint *)(unaff_EBP + -0x1c) = uVar5;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar2 = FUN_0042459a();
      puVar3 = (undefined4 *)FUN_0045f1e3(0xffffffff);
      *puVar3 = uVar2;
    }
    if (0 < *(int *)(unaff_EBP + -0x1c)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar4 = 1;
      *(undefined4 *)(unaff_EBP + -0x20) = 1;
      do {
        *(int *)(unaff_EBP + -0x14) = iVar4;
        while (iVar4 < *(int *)(unaff_EBP + -0x1c)) {
          iVar4 = *(int *)(unaff_EBP + -0x18);
          FUN_0045a1d8(unaff_EBP + 8,*(undefined4 *)(iVar4 + *piVar6));
          iVar7 = *piVar6;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (*(int *)(iVar4 + iVar7) == 0x7fffffff) {
            uVar2 = FUN_00679d22(unaff_EBP + -0x24,0xe6a);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_00414f8b(uVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x24) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
            }
          }
          uVar2 = 0;
          FUN_0045ed72(0);
          FUN_0045ee27(uVar2);
          iVar7 = *(int *)(unaff_EBP + -0x14) * 4;
          FUN_0045a1d8(unaff_EBP + -0x10,*(undefined4 *)(iVar7 + *piVar6));
          iVar4 = *(int *)(iVar7 + *piVar6);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar4 == 0x7fffffff) {
            uVar2 = FUN_00679d22(unaff_EBP + -0x28,0xe6a);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            FUN_00414f8b(uVar2);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (*(int *)(unaff_EBP + -0x28) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + -0x28) + -0xc);
            }
          }
          uVar2 = 0;
          FUN_0045ed72(0);
          FUN_0045ee27(uVar2);
          _Str2 = *(char **)(unaff_EBP + -0x10);
          if (*(char **)(unaff_EBP + -0x10) == (char *)0x0) {
            _Str2 = DAT_00980dfc;
          }
          _Str1 = DAT_00980dfc;
          if (*(int *)(unaff_EBP + 8) != 0) {
            _Str1 = *(char **)(unaff_EBP + 8);
          }
          iVar4 = _strcmp(_Str1,_Str2);
          if (0 < iVar4) {
            iVar4 = *piVar6;
            uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + iVar4);
            *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + iVar4) = *(undefined4 *)(iVar7 + iVar4);
            *(undefined4 *)(iVar7 + *piVar6) = uVar2;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          iVar4 = *(int *)(unaff_EBP + -0x14);
        }
        iVar7 = *(int *)(unaff_EBP + -0x20);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        iVar4 = iVar7 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar4;
      } while (iVar7 < *(int *)(unaff_EBP + -0x1c));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


