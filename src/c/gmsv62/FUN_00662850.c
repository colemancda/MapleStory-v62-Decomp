/* FUN_00662850 - 0x00662850 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00662850(void)

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
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined1 local_b4 [16];
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
  
  if ((DAT_0097b130 & 1) == 0) {
    uVar23 = 0x80;
    puVar22 = &DAT_0097b060;
    puVar21 = local_a4;
    puVar20 = &DAT_0097b070;
    puVar19 = local_b4;
    puVar18 = &DAT_0097b080;
    puVar17 = local_44;
    puVar16 = &DAT_0097b090;
    DAT_0097b130 = DAT_0097b130 | 1;
    puVar15 = local_84;
    puVar14 = &DAT_0097b0a0;
    puVar13 = local_64;
    puVar12 = &DAT_0097b0b0;
    puVar11 = local_24;
    puVar10 = &DAT_0097b0c0;
    puVar9 = local_34;
    puVar8 = &DAT_0097b0d0;
    puVar7 = local_54;
    puVar6 = &DAT_0097b0e0;
    puVar5 = local_74;
    puVar4 = &DAT_0097b0f0;
    puVar3 = local_94;
    FUN_006f5a34(local_14,&DAT_0097b100);
    FUN_006f5a34(puVar3,puVar4);
    FUN_006f5a34(puVar5,puVar6);
    FUN_006f5a34(puVar7,puVar8);
    FUN_006f5a34(puVar9,puVar10);
    FUN_006f5a34(puVar11,puVar12);
    FUN_006f5a34(puVar13,puVar14);
    FUN_006f5a34(puVar15,puVar16);
    FUN_006f5a34(puVar17,puVar18);
    FUN_006f5a34(puVar19,puVar20);
    uVar2 = FUN_006f5a34(puVar21,puVar22);
    FUN_006f5512(uVar2,uVar23);
    FUN_008796d0(&DAT_00662963);
  }
  FUN_006f5b1a(local_14,&DAT_0097b120);
  cVar1 = FUN_006f5b9d();
  return cVar1 == '\0';
}


