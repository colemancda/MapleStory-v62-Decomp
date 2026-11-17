/* FUN_00670464 - 0x00670464 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00670464(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  puVar18 = &DAT_0097ade0;
  puVar17 = local_94;
  puVar16 = &DAT_0097ae70;
  puVar15 = local_34;
  puVar14 = &DAT_0097b0a0;
  puVar13 = local_74;
  puVar12 = &DAT_0097af20;
  puVar11 = local_54;
  puVar10 = &DAT_0097af30;
  puVar9 = local_14;
  puVar8 = &DAT_0097af40;
  puVar7 = local_24;
  puVar6 = &DAT_0097b000;
  puVar5 = local_44;
  puVar4 = &DAT_0097b010;
  puVar3 = local_64;
  FUN_006f5a34(local_84,&DAT_0097b030);
  FUN_006f5a34(puVar3,puVar4);
  FUN_006f5a34(puVar5,puVar6);
  FUN_006f5a34(puVar7,puVar8);
  FUN_006f5a34(puVar9,puVar10);
  FUN_006f5a34(puVar11,puVar12);
  FUN_006f5a34(puVar13,puVar14);
  FUN_006f5a34(puVar15,puVar16);
  uVar2 = FUN_006f5a34(puVar17,puVar18);
  FUN_006f5b1a(local_a4,uVar2);
  cVar1 = FUN_006f5bb6();
  return cVar1 != '\0';
}


