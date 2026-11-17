/* FUN_004ea30d - 0x004ea30d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004ea30d(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int unaff_EBP;
  uint local_1c;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  if (*(int *)(DAT_00978368 + 0x208c) == 0) {
    local_1c = 0x4ea331;
    iVar2 = FUN_007d1e08();
    if (499 < iVar2 - *(int *)(iVar1 + 0x2090)) {
      local_1c = 0;
      FUN_0060142b(0x23,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_1c = 0x4ea359;
      iVar2 = FUN_00429303();
      if (iVar2 == 0) {
        local_1c = 0;
      }
      else {
        local_1c = 0x4ea362;
        iVar2 = FUN_00429303();
        local_1c = (uint)*(byte *)(iVar2 + 0xf8);
      }
      FUN_00457cda();
      local_1c = *(uint *)(unaff_EBP + 8);
      FUN_00457d37();
      puVar4 = *(undefined1 **)(unaff_EBP + 0xc);
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        puVar4 = &DAT_00978474;
      }
      *(uint **)(unaff_EBP + 8) = &local_1c;
      local_1c = 0;
      FUN_00414edd(puVar4,0xffffffff);
      FUN_00459cb5();
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        local_1c = 0x4ea3b8;
        puVar5 = (undefined2 *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
        local_1c = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
        FUN_0045d247();
        local_1c = 0x4ea3d1;
        iVar2 = (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
        local_1c = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iVar2 + 4));
        FUN_0045d247();
      }
      local_1c = 0;
      FUN_00457cda();
      local_1c = *(uint *)(unaff_EBP + 0x10);
      FUN_00457cda();
      local_1c = DAT_00979244 & 0xff;
      FUN_00457cda();
      if (DAT_00979244 != 0) {
        local_1c = *(uint *)(unaff_EBP + 0x14);
        FUN_00457d37();
        local_1c = *(uint *)(unaff_EBP + 0x18);
        FUN_00457d37();
      }
      local_1c = unaff_EBP - 0x1c;
      FUN_004751b2();
      uVar3 = 1;
      *(undefined4 *)(iVar1 + 0x208c) = 1;
      local_1c = 0x4ea43d;
      uVar6 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x2090) = uVar6;
      local_1c = 0x4ea44f;
      FUN_0045ebca();
      goto LAB_004ea451;
    }
  }
  uVar3 = 0;
LAB_004ea451:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


