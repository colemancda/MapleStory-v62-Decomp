/* FUN_0052acac - 0x0052acac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052acac(void)

{
  int extraout_ECX;
  int unaff_EBP;
  uint local_1c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    local_1c = 0;
    FUN_0060142b(0xd9,0);
    local_1c = 5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda();
    local_1c = *(uint *)(extraout_ECX + 0x68);
    FUN_00457d37();
    local_1c = *(uint *)(extraout_ECX + 0x6c);
    FUN_00457d37();
    local_1c = *(uint *)(unaff_EBP + 8);
    FUN_00457d37();
    local_1c = (uint)*(byte *)(extraout_ECX + 0x60);
    FUN_00457cda();
    local_1c = (uint)*(byte *)(extraout_ECX + 100);
    FUN_00457cda();
    local_1c = *(uint *)(extraout_ECX + 0x1d6c);
    FUN_00457d37();
    *(uint **)(unaff_EBP + 8) = &local_1c;
    local_1c = 0;
    FUN_00414f8b(extraout_ECX + 0x1d70);
    FUN_00459cb5();
    local_1c = unaff_EBP - 0x1c;
    FUN_004751b2();
    local_1c = *(uint *)(extraout_ECX + 0x70);
    FUN_004ae16e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x18) = 1;
    local_1c = 0x52ad7c;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


