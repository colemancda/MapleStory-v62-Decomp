/* FUN_00462d72 - 0x00462d72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00462d72(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  cVar1 = FUN_0042452b();
  if ((cVar1 == -0x6a) || (cVar1 == -0x6b)) {
    uVar2 = FUN_0042459a();
    FUN_0045d51b(uVar2,cVar1);
    FUN_0045d578(uVar2,cVar1);
    FUN_00492a12();
  }
  FUN_00464f0d(cVar1);
  if (((cVar1 == '\x7f') || (cVar1 == -0x7f)) || (cVar1 == -0x80)) {
    FUN_00464f0d(cVar1);
    FUN_00464e98();
  }
  return;
}


