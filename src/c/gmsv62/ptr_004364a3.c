/* ptr_004364a3 - 0x004364a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004364a3(int param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  if ((in_EAX + 0x10U & -(uint)(in_EAX != 0)) == 0) {
    *(uint *)(param_1 + 0x10) = -(uint)(param_2 != 0) & param_2 + 0x10U;
    uVar1 = -(uint)(*(int *)(unaff_ESI + 8) != 0) & *(int *)(unaff_ESI + 8) + 0x10U;
    *(undefined4 *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4) = 0;
  }
  else {
    uVar1 = -(uint)(in_EAX != 0) & in_EAX + 0x10U;
    uVar2 = -(uint)(param_2 != 0) & param_2 + 0x10U;
    *(uint *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4) = -(uint)(uVar1 != 0) & uVar1 - 0x10;
    uVar1 = -(uint)(*(int *)(unaff_ESI + 8) != 0) & *(int *)(unaff_ESI + 8) + 0x10U;
    uVar2 = -(uint)(*(int *)(unaff_ESI + 4) != 0) & *(int *)(unaff_ESI + 4) + 0x10U;
    *(uint *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 8) = -(uint)(uVar1 != 0) & uVar1 - 0x10;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  FUN_0040294d();
  return;
}


