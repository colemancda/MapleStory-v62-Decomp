/* FUN_00565a4e - 0x00565a4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00565a4e(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int local_44;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x144) == 0) {
    *(int *)(extraout_ECX + 0x144) = 1;
    local_44 = 0x565a83;
    FUN_0056ab22();
    local_44 = 0x565a8e;
    FUN_0056ac65();
    local_44 = 0x565a96;
    FUN_00868fb0();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    local_44 = 0x565aa1;
    FUN_00868ff0();
    local_44 = 0;
    FUN_0060142b(1,0);
    *(int **)(unaff_EBP + -0x10) = &local_44;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_44 = 0;
    FUN_00414edd(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
    FUN_00459cb5();
    *(int **)(unaff_EBP + -0x10) = &local_44;
    local_44 = 0;
    FUN_00414edd(*(undefined4 *)(unaff_EBP + 0xc),0xffffffff);
    FUN_00459cb5();
    local_44 = 0x10;
    uVar1 = FUN_008692d0();
    FUN_00457fa0(uVar1);
    local_44 = 0x565b01;
    local_44 = FUN_008693d0();
    FUN_00457d37();
    local_44 = *(int *)(DAT_00973cd8 + 0x24);
    FUN_00457cda();
    local_44 = 0;
    FUN_00457cda();
    local_44 = 0;
    FUN_00457cda();
    local_44 = 0x565b37;
    local_44 = FUN_00565b9d();
    FUN_00457d37();
    local_44 = unaff_EBP + -0x20;
    FUN_004751b2();
    local_44 = -1;
    FUN_00414edd(*(undefined4 *)(unaff_EBP + 8));
    if (DAT_00979430 != 0) {
      local_44 = 0x565b74;
      (**(code **)(*(int *)(DAT_00979430 + 4) + 0x34))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_44 = 0x565b7f;
    FUN_0045ebca();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_44 = 0x565b8a;
    FUN_00868fe0();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


