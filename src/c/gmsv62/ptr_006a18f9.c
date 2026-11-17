/* ptr_006a18f9 - 0x006a18f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006a18f9(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = timeGetTime();
  if ((int)(DVar1 - *(int *)(param_1 + 0xa4)) < 0) {
    DVar1 = timeGetTime();
    uVar2 = (*(int *)(param_1 + 0xa4) - DVar1) / 1000;
  }
  else {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0xa8) != uVar2) {
    *(uint *)(param_1 + 0xa8) = uVar2;
    if (uVar2 < 0x79) {
      FUN_008161f1();
    }
    if (uVar2 == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 4) + 0x24))();
      (**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x1c))(0);
      FUN_008180db();
      FUN_00817f6e();
      FUN_00414edd(&DAT_00978474,0xffffffff);
      FUN_006a19f8();
      if ((DAT_0097bcec != 0) && (FUN_00815de9(), DAT_0097bcec != 0)) {
        (*(code *)**(undefined4 **)(DAT_0097bcec + 8))();
      }
      *(undefined4 *)(DAT_00978368 + 0x3298) = 0;
    }
    FUN_008162ff();
  }
  return;
}


