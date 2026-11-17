/* FUN_0059bc6c - 0x0059bc6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0059bda4) */

undefined4 FUN_0059bc6c(void)

{
  int iVar1;
  char *_Str1;
  int extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0059c2ad();
  uVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00434e21(unaff_EBP + -0x18,s__s__s_00965988);
  iVar1 = FUN_0087bfbe(*(undefined4 *)(unaff_EBP + -0x18),&DAT_009659f0);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar1 != 0) {
    FUN_0087be76(extraout_ECX + 0x2c,4);
    iVar1 = *(int *)(extraout_ECX + 0x2c);
    *(undefined4 *)(extraout_ECX + 0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        FUN_00414edd();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        _memset((void *)(unaff_EBP + -0x134),0,0x104);
        _memset((void *)(unaff_EBP + -0x238),0,0x104);
        FUN_0087be76(unaff_EBP + -0x134,1,100,*(undefined4 *)(unaff_EBP + -0x14));
        FUN_0087be76(unaff_EBP + -0x30,4,1,*(undefined4 *)(unaff_EBP + -0x14));
        FUN_00414edd();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
        }
        if (iVar1 < 0x11) {
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffdc0;
          FUN_00450368(unaff_EBP + -0x10);
          iVar1 = FUN_0059be91();
          if (iVar1 != 0) {
            _Str1 = DAT_00980dfc;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              _Str1 = *(char **)(unaff_EBP + -0x10);
            }
            iVar1 = _strcmp(_Str1,&DAT_00978474);
            if (iVar1 != 0) {
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
              *(undefined1 *)(unaff_EBP + -4) = 2;
              FUN_00434e21(unaff_EBP + -0x28,s__s__s_00965988);
              *(int *)(extraout_ECX + 0x30) =
                   *(int *)(extraout_ECX + 0x30) + *(int *)(unaff_EBP + -0x30);
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              FUN_0059c218();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              FUN_00414f8b();
              *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 4) = *(undefined4 *)(unaff_EBP + -0x30);
              uVar2 = FUN_0059c2e9();
              *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
              FUN_0059c24b();
              FUN_0059c268();
              *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(undefined1 *)(unaff_EBP + -4) = 2;
              if (*(int *)(unaff_EBP + -0x1c) != 0) {
                FUN_0059c27e();
                *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              }
              *(undefined1 *)(unaff_EBP + -4) = 1;
              FUN_00414ebb();
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      } while (*(int *)(unaff_EBP + -0x24) < *(int *)(extraout_ECX + 0x2c));
    }
    FUN_0087bdf9();
    uVar2 = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


