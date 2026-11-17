/* FUN_007b33fb - 0x007b33fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b33fb(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  FUN_0079c9ce(*(undefined4 *)(unaff_EBP + 8),*puVar1,puVar1[1]);
  FUN_0060142b(100,0,0);
  iVar2 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)(**(code **)(iVar2 + 0x10))();
  FUN_00457d37(*puVar1);
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  FUN_00457d37(*(undefined4 *)(iVar2 + 4));
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


