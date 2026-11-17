/* FUN_0047bf03 - 0x0047bf03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047bf03(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int local_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_2c = 0x990;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18);
  uVar2 = *puVar1;
  local_2c = 0x7fffffff;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_0047c824(2,uVar2,0,0x80000000);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_2c = 0x47bf63;
  FUN_00414ebb();
  if (-1 < *(int *)(unaff_EBP + -0x14)) {
    if (0x1a < *(int *)(unaff_EBP + -0x14)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0x1a;
    }
    local_2c = 0x47bf82;
    FUN_0045f10c();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      do {
        local_2c = 0x991;
        puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20);
        uVar2 = *puVar1;
        local_2c = *(int *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00434e21(unaff_EBP + -0x1c,uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_2c = 0x47bfc0;
        FUN_00414ebb();
        local_2c = 0;
        local_2c = FUN_0047c713(unaff_EBP + -0x24,2,*(undefined4 *)(unaff_EBP + -0x1c));
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_2c = 0x47bfea;
        FUN_00414ebb();
        if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x10) != '\0')) {
          local_2c = 1;
          iVar3 = FUN_007d1e11(unaff_EBP + -0x10);
          if (iVar3 != 0) {
            *(int **)(unaff_EBP + -0x28) = &local_2c;
            local_2c = 0;
            FUN_00414f8b(unaff_EBP + -0x10);
            iVar3 = FUN_0047c5bf();
            if (iVar3 == 0) {
              local_2c = unaff_EBP + -0x10;
              FUN_004655d4(0xffffffff);
              FUN_00414f8b();
            }
          }
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x14));
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_2c = 0x47c054;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_2c = 0x47c060;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


