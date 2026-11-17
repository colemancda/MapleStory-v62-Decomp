/* FUN_00509be0 - 0x00509be0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00509be0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_c8;
  undefined4 local_c4 [4];
  int local_b4;
  
  _memset(&local_c8,0,0xc4);
  cVar1 = *(char *)(param_1 + 0x88);
  local_c8 = *(undefined4 *)(param_1 + 0x95);
  iVar2 = *(int *)(param_1 + 0xa9);
  puVar4 = local_c4;
  for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (iVar2 == (-(uint)(cVar1 != '\0') & 0x3e6) + 0x1005f4) {
    local_b4 = iVar2;
  }
  FUN_0044582d();
  FUN_0043f6a6(1,&local_c8);
  return;
}


