/* FUN_006c941e - 0x006c941e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006c941e(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x9a5);
  do {
    if (iVar4 < 0x19) {
      cVar2 = '\x04';
    }
    else {
      cVar2 = (0x1d < iVar4) + '\x05';
    }
    uVar1 = FUN_006c97ae(iVar4);
    *(char *)((int)puVar3 + -1) = cVar2;
    *puVar3 = uVar1;
    *(undefined4 *)((int)puVar3 + 7) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar4 < 0x25);
  return;
}


