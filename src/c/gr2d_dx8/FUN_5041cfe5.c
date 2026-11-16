/* FUN_5041cfe5 - 0x5041cfe5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

int * FUN_5041cfe5(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *piVar4;
  
  FUN_5042a430();
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  iVar1 = puVar3[1];
  piVar4 = (int *)0x0;
  if (iVar1 < 0x31545845) {
    if (iVar1 == 0x31545844) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x20;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041ced3(pvVar2,puVar3);
    }
    else if (iVar1 < 0x29) {
      if (iVar1 == 0x28) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041c910(pvVar2,puVar3);
      }
      else {
        switch(iVar1) {
        case 0x14:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (pvVar2 == (void *)0x0) {
LAB_5041d6dc:
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = FUN_5041bff9(pvVar2,puVar3);
          }
          break;
        case 0x15:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c201(pvVar2,puVar3);
          break;
        case 0x16:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c21d(pvVar2,puVar3);
          break;
        case 0x17:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c239(pvVar2,puVar3);
          break;
        case 0x18:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c526(pvVar2,puVar3);
          break;
        case 0x19:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 5;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c542(pvVar2,puVar3);
          break;
        case 0x1a:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 6;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c55e(pvVar2,puVar3);
          break;
        case 0x1b:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c57a(pvVar2,puVar3);
          break;
        case 0x1c:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 8;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c596(pvVar2,puVar3);
          break;
        case 0x1d:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 9;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c63f(pvVar2,puVar3);
          break;
        case 0x1e:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 10;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c8bc(pvVar2,puVar3);
          break;
        case 0x1f:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0xb;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c8d8(pvVar2,puVar3);
          break;
        default:
          goto switchD_5041d027_caseD_20;
        case 0x22:
          pvVar2 = (void *)FUN_504018ba();
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0xc;
          if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
          piVar4 = FUN_5041c8f4(pvVar2,puVar3);
        }
      }
    }
    else if (iVar1 < 0x3f) {
      if (iVar1 == 0x3e) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041caf6(pvVar2,puVar3);
      }
      else if (iVar1 == 0x29) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xe;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041c94d(pvVar2,puVar3);
      }
      else if (iVar1 == 0x32) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xf;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041c969(pvVar2,puVar3);
      }
      else if (iVar1 == 0x33) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041ca86(pvVar2,puVar3);
      }
      else if (iVar1 == 0x34) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041caa2(pvVar2,puVar3);
      }
      else if (iVar1 == 0x3c) {
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x12;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041cabe(pvVar2,puVar3);
      }
      else {
        if (iVar1 != 0x3d) goto switchD_5041d027_caseD_20;
        pvVar2 = (void *)FUN_504018ba();
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
        piVar4 = FUN_5041cada(pvVar2,puVar3);
      }
    }
    else if (iVar1 == 0x3f) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x15;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cb12(pvVar2,puVar3);
    }
    else if (iVar1 == 0x40) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x16;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cb2e(pvVar2,puVar3);
    }
    else if (iVar1 == 0x41) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x17;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cb4a(pvVar2,puVar3);
    }
    else if (iVar1 == 0x43) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x18;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041ce2b(pvVar2,puVar3);
    }
    else {
      if (iVar1 != 0x46) goto switchD_5041d027_caseD_20;
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x19;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041ce47(pvVar2,puVar3);
    }
  }
  else if (iVar1 < 0x36314c21) {
    if (iVar1 == 0x36314c20) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041ce63(pvVar2,puVar3);
    }
    else if (iVar1 == 0x32545844) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x21;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cf0c(pvVar2,puVar3);
    }
    else if (iVar1 == 0x32595559) {
      puVar3 = (undefined4 *)FUN_504018ba();
      *(undefined4 **)(unaff_EBP + 8) = puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0x1f;
      if (puVar3 == (undefined4 *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cfcd(puVar3);
    }
    else if (iVar1 == 0x33545844) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x22;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cf24(pvVar2,puVar3);
    }
    else if (iVar1 == 0x34545844) {
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x23;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cf3c(pvVar2,puVar3);
    }
    else {
      if (iVar1 != 0x35545844) goto switchD_5041d027_caseD_20;
      pvVar2 = (void *)FUN_504018ba();
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x24;
      if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
      piVar4 = FUN_5041cf54(pvVar2,puVar3);
    }
  }
  else if (iVar1 == 0x36314c41) {
    pvVar2 = (void *)FUN_504018ba();
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1b;
    if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
    piVar4 = FUN_5041ce7f(pvVar2,puVar3);
  }
  else if (iVar1 == 0x36315220) {
    pvVar2 = (void *)FUN_504018ba();
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
    piVar4 = FUN_5041ce9b(pvVar2,puVar3);
  }
  else if (iVar1 == 0x36315241) {
    pvVar2 = (void *)FUN_504018ba();
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    if (pvVar2 == (void *)0x0) goto LAB_5041d6dc;
    piVar4 = FUN_5041ceb7(pvVar2,puVar3);
  }
  else {
    if (iVar1 != 0x59565955) goto switchD_5041d027_caseD_20;
    puVar3 = (undefined4 *)FUN_504018ba();
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x1e;
    if (puVar3 == (undefined4 *)0x0) goto LAB_5041d6dc;
    piVar4 = FUN_5041cfb5(puVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((piVar4 != (int *)0x0) && (piVar4[4] != 0)) {
    (**(code **)(*piVar4 + 0xc))();
  }
switchD_5041d027_caseD_20:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar4;
}


