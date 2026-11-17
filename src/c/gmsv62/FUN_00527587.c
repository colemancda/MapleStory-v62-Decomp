/* FUN_00527587 - 0x00527587 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00527587(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = FUN_005265f8(0x5c);
  iVar2 = FUN_005265f8(0x5b);
  iVar3 = FUN_005265f8(0xa5);
  iVar4 = FUN_005265f8(0xa4);
  iVar5 = FUN_005265f8(0xa3);
  iVar6 = FUN_005265f8(0xa2);
  iVar7 = FUN_005265f8(0xa1);
  iVar8 = FUN_005265f8(0xa0);
  iVar9 = FUN_005265f8(0x12);
  iVar10 = FUN_005265f8(0x11);
  iVar11 = FUN_005265f8(0x10);
  return (uint)(iVar11 != 0) |
         -(uint)(iVar1 != 0) & 0x5000 | -(uint)(iVar2 != 0) & 0x3000 | -(uint)(iVar3 != 0) & 0x500 |
         -(uint)(iVar4 != 0) & 0x300 | -(uint)(iVar5 != 0) & 0x50 | -(uint)(iVar6 != 0) & 0x30 |
         -(uint)(iVar7 != 0) & 5 | -(uint)(iVar8 != 0) & 3 | -(uint)(iVar9 != 0) & 0x100 |
         -(uint)(iVar10 != 0) & 0x10;
}


