/*
 * ScaleAdapter.java
 *
 * SMNIST for Humans
 *
 * Copyright (C) 2019, Dr. Bátfai Norbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Ez a program szabad szoftver; terjeszthető illetve módosítható a
 * Free Software Foundation által kiadott GNU General Public License
 * dokumentumában leírtak; akár a licenc 3-as, akár (tetszőleges) későbbi
 * változata szerint.
 *
 * Ez a program abban a reményben kerül közreadásra, hogy hasznos lesz,
 * de minden egyéb GARANCIA NÉLKÜL, az ELADHATÓSÁGRA vagy VALAMELY CÉLRA
 * VALÓ ALKALMAZHATÓSÁGRA való származtatott garanciát is beleértve.
 * További részleteket a GNU General Public License tartalmaz.
 *
 * A felhasználónak a programmal együtt meg kell kapnia a GNU General
 * Public License egy példányát; ha mégsem kapta meg, akkor
 * tekintse meg a <http://www.gnu.org/licenses/> oldalon.
 *
 * Version history:
 *
 * https://bhaxor.blog.hu/2019/03/10/the_semantic_mnist
 */
package hu.blog.bhaxor.androidhuman;

/**
 *
 * @author nbatfai
 */
public class ScaleAdapter extends android.view.ScaleGestureDetector.SimpleOnScaleGestureListener {

    private SMNISTSurfaceView surfaceView;

    public ScaleAdapter(SMNISTSurfaceView surfaceView) {
        this.surfaceView = surfaceView;
    }

    @Override
    public boolean onScale(android.view.ScaleGestureDetector detector) {

        float scaleFactor = surfaceView.getScaleFactor() * detector.getScaleFactor();
        surfaceView.setScaleFactor(Math.max(1.0f, Math.min(scaleFactor, 3.0f)));

        surfaceView.repaint();

        return true;
    }

}
