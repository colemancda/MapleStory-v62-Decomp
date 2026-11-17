/* FUN_004756a1 - 0x004756a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004756a1(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint uVar9;
  int unaff_EBP;
  bool bVar10;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_1c;
  
  FUN_00879bb8();
  puStack_1c = (undefined4 *)0x4756b9;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + -0xd) = uVar2;
  puStack_1c = (undefined4 *)0x4756c4;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puVar4 = (uint *)(DAT_00978368 + 0x2050);
  uVar9 = *(byte *)(unaff_EBP + -0xd) >> 1 & 1;
  uVar1 = *puVar4;
  *(uint *)(unaff_EBP + -0x14) = uVar9;
  if (uVar9 != uVar1) {
    *puVar4 = uVar9;
    iVar6 = DAT_009796d4;
    bVar10 = DAT_009796d4 != 0;
    *(int *)(unaff_EBP + 8) = DAT_009796d4;
    if (bVar10) {
      puStack_1c = &DAT_00978498;
      puStack_20 = (undefined1 *)0x475708;
      iVar5 = (**(code **)(*(int *)(iVar6 + 4) + 0x48))();
      if (iVar5 != 0) {
        puStack_1c = &DAT_00978498;
        puStack_20 = (undefined1 *)0x475714;
        iVar6 = (**(code **)(*(int *)(iVar6 + 4) + 0x48))();
        if ((-(uint)(iVar6 != 0) & *(uint *)(unaff_EBP + 8)) != 0) {
          puStack_1c = (undefined4 *)0x475726;
          thunk_FUN_00464e98();
        }
      }
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_1c = (undefined4 *)0xffffffff;
      puStack_20 = &DAT_00978474;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      iStack_24 = 0x475741;
      FUN_00414edd();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_1c = (undefined4 *)0x47574a;
      DVar7 = GetVersion();
      if (0x7fffffff < DVar7) {
        puStack_1c = (undefined4 *)0x187;
        puStack_20 = (undefined1 *)(unaff_EBP + -0x14);
        iStack_24 = 0x475766;
        puStack_1c = (undefined4 *)FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_20 = (undefined1 *)0x475773;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_1c = (undefined4 *)0x47577e;
        FUN_00414ebb();
      }
      puStack_1c = (undefined4 *)0x186;
      puStack_20 = (undefined1 *)(unaff_EBP + -0x14);
      iStack_24 = 0x47578e;
      puVar8 = (undefined4 *)FUN_00679d22();
      puStack_1c = *(undefined4 **)(unaff_EBP + 8);
      puStack_20 = (undefined1 *)*puVar8;
      iStack_24 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_28 = 0x4757a1;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_1c = (undefined4 *)0x4757af;
      FUN_00414ebb();
      puStack_1c = (undefined4 *)0x0;
      puStack_20 = (undefined1 *)0x0;
      iStack_24 = 0;
      uStack_28 = 0;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_2c;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      puStack_1c = (undefined4 *)0x0;
      puStack_20 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_24 = 0x4757d9;
      FUN_0084bb67();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_1c = (undefined4 *)0x4757e5;
      FUN_00414ebb();
    }
  }
  if ((*(byte *)(unaff_EBP + -0xd) & 4) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x21000004;
    *(undefined4 *)(unaff_EBP + -0x18) = 0x21000004;
    puStack_1c = (undefined4 *)&DAT_00903698;
    puStack_20 = (undefined1 *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
    iStack_24 = 0x47580b;
    __CxxThrowException_8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


