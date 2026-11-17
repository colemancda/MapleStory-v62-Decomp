/* FUN_004f1220 - 0x004f1220 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f1220(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EBP;
  int local_20;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x30);
  pcVar2 = (char *)*puVar1;
  if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) || (*(int *)(unaff_EBP + 0x18) == 0)) {
    iVar3 = *(int *)(DAT_00978368 + 0x2088);
    local_20 = 0;
    FUN_0060142b(0xd3,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined1 *)(unaff_EBP + 0x30) = 0;
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      *(undefined1 *)(unaff_EBP + 0x30) = 2;
    }
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      *(byte *)(unaff_EBP + 0x30) = *(byte *)(unaff_EBP + 0x30) | 1;
    }
    local_20 = *(int *)(unaff_EBP + 0x30);
    FUN_00457cda();
    local_20 = *(int *)(unaff_EBP + 0xc);
    FUN_00457cda();
    local_20 = *(int *)(unaff_EBP + 0x10);
    FUN_00457cda();
    local_20 = *(int *)(unaff_EBP + 8);
    FUN_00457cda();
    local_20 = iVar3;
    FUN_00457d37();
    *(int **)(unaff_EBP + 0x30) = &local_20;
    local_20 = 0;
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0x1c));
    FUN_00459cb5();
    *(int **)(unaff_EBP + 0x30) = &local_20;
    local_20 = 0;
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0x20));
    FUN_00459cb5();
    *(int **)(unaff_EBP + 0x30) = &local_20;
    local_20 = 0;
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0x24));
    FUN_00459cb5();
    *(int **)(unaff_EBP + 0x30) = &local_20;
    local_20 = 0;
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0x28));
    FUN_00459cb5();
    *(int **)(unaff_EBP + 0x30) = &local_20;
    local_20 = 0;
    FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0x2c));
    FUN_00459cb5();
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      *(int **)(unaff_EBP + 0x18) = &local_20;
      local_20 = 0;
      FUN_00414f8b(puVar1);
      FUN_00459cb5();
    }
    local_20 = unaff_EBP + -0x1c;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_20 = 0x4f135d;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


