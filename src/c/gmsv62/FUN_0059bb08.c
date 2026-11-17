/* FUN_0059bb08 - 0x0059bb08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0059bb08(void)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  int iVar3;
  BOOL BVar4;
  int extraout_ECX;
  undefined4 uVar5;
  int unaff_EBP;
  uint uVar6;
  uint uVar7;
  
  FUN_00879bb8();
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar1 = *(undefined4 *)(extraout_ECX + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00434e21(unaff_EBP + -0x18,s__s__s_00965988,uVar1,s___swf_009659e8);
  pvVar2 = FindFirstFileA(*(LPCSTR *)(unaff_EBP + -0x18),(LPWIN32_FIND_DATAA)(unaff_EBP + -0x16c));
  *(HANDLE *)(unaff_EBP + -0x24) = pvVar2;
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uVar1 = *(undefined4 *)(extraout_ECX + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21(unaff_EBP + -0x10,s__s__s_00965988,uVar1,unaff_EBP + -0x140);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      iVar3 = *(int *)(extraout_ECX + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
        uVar6 = iVar3 + -8 + *(int *)(iVar3 + -4) * 8;
        while (uVar6 != 0) {
          if (*(uint *)(extraout_ECX + 0x34) < uVar6) {
            uVar7 = uVar6 - 8;
          }
          else {
            uVar7 = 0;
          }
          FUN_0059c1e9(uVar6);
          iVar3 = FUN_0045ec92(*(undefined4 *)(unaff_EBP + -0x28));
          uVar6 = uVar7;
          if (iVar3 != 0) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          }
        }
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x20,&DAT_00964da0,*(undefined4 *)(unaff_EBP + -0x10));
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        DeleteFileA(*(LPCSTR *)(unaff_EBP + -0x20));
      }
      BVar4 = FindNextFileA(*(HANDLE *)(unaff_EBP + -0x24),(LPWIN32_FIND_DATAA)(unaff_EBP + -0x16c))
      ;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_0059c27e(0);
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    } while (BVar4 != 0);
    FindClose(*(HANDLE *)(unaff_EBP + -0x24));
    uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


